from Selenium import webdriver
from bs4 import BeautifulSoup


# Set up the webdriver
driver = webdriver.Firefox()

# Navigate to the webpage
driver.get('https://www.accuweather.com/en/il/ramat-aviv/215835/january-weather/215835')

# Wait for the page to load
driver.implicitly_wait(10)

# Parse the page source
soup = BeautifulSoup(driver.page_source, 'html.parser')

# Find all the elements with class "monthly-daypanel"
day_panels = soup.find_all('a', class_='monthly-daypanel')

# Create an empty list to store the day and temperature tuples
day_temp_list = []

# Iterate over the day panels
for day_panel in day_panels:
  # Find the element with class "date"
  date_element = day_panel.find('div', class_='date')
  # Extract the day from the element text
  day = int(date_element.text)

  # Find the element with class "high"
  high_temp_element = day_panel.find('div', class_='high')
  # Extract the high temperature from the element text
  high_temp = int(high_temp_element.text[:-1])

  # Find the element with class "low"
  low_temp_element = day_panel.find('div', class_='low')
  # Extract the low temperature from the element text
  low_temp = int(low_temp_element.text[:-1])

  # Calculate the average temperature for the day
  avg_temp = (high_temp + low_temp) / 2

  # Add the day and average temperature to the list
  day_temp_list.append((day, avg_temp))

# Close the webdriver
driver.close()

# Print the list of tuples
print(day_temp_list)