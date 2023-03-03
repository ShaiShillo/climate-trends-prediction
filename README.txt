Presentation of One-Pager Final Project Workaround: Using Third-Party Websites for Displaying Large .ipynb Files on GitHub
--------------------------------------------------------------------------------------------------------------------------
When preparing my final project, I encountered an issue where the size of the project notebook file exceeded the limit that GitHub allows to display online.
Therefore, to make the project accessible and viewable for users, I had to find an alternative solution. 
After some research, I came across a third-party website that allowed me to host my project and present it in a user-friendly manner.

Please note that while this was not an ideal situation, I made sure to choose a reputable and secure website to ensure the integrity of my project. 
I apologize for any inconvenience this may cause and hope that this workaround allows for a seamless and enjoyable viewing experience of my project !.
LINK: https://nbviewer.org/github/ShaiShillo/climate-trends-prediction/blob/master/.ipynb_checkpoints/Final_project_presentation_one_pager-checkpoint.ipynb


# Climate Trends Prediction
---------------------------
This is a data science project that predicts future temperatures around the globe using machine learning algorithms. 
The project analyzes historical temperature data from various sources and uses it to train a machine learning model. 
The model can then be used to make predictions about future temperature trends.

## Table of Contents
--------------------
- [Introduction](#introduction)
- [Data Source](#data-source)
- [Methodology](#methodology)
- [Installation](#installation)
- [Usage](#usage)
- [Results](#results)
- [Conclusion](#conclusion)
- [Contributing](#contributing)
- [Acknowledgements](#acknowledgements)
- [Authors](#authors)

## Introduction
---------------
Climate change is a global issue that affects our planet and its inhabitants. The aim of this project is to predict future temperature trends around the globe using machine learning techniques, specifically linear regression. By analyzing past temperature data, we can identify patterns and use these patterns to make predictions about future temperature trends.

## Data Source
--------------
The data used for this project was obtained from [https://www.wunderground.com/]. The dataset includes It contains [1,744,472] samples of global temperature measurements, spanning from [2015] to [2023]. Each sample includes ['Year', 'Month', 'Day', 'Temperature', 'Temp Dew Point', 'Humidity', 'Wind Direction', 'Wind Speed', 'Precipitation', 'Condition', 'Location', 'Serialized Hemisphere']. 

The data was preprocessed by: 

1.Data Cleaning: The raw data was examined for missing values, and any instances with missing data were removed or imputed. Outliers were also identified and removed from the dataset.

2.Feature Engineering: Several new features were created based on the existing features in the dataset. For example, we created a "season" feature based on the month of each observation.

3.Scaling: The continuous features in the dataset were scaled using either StandardScaler or MinMaxScaler to ensure that all features were on the same scale.

4.Encoding Categorical Variables: The categorical features in the dataset were encoded using one-hot encoding, which converts categorical data into a format that can be more easily used by machine learning models.

5.Train/Test Split: The dataset was split into training and testing sets using a 80/20 split.

6.Feature Selection: We used a variance threshold to remove features with low variance, and also performed feature selection using correlation and p-value analysis to select the most important features for our model.

7..Missing Value Imputation: For the remaining missing values, we used KNN imputation to fill them with nearest neighbors.]..

## Methodology
--------------
We used We use linear regression models to predict future temperature trends. We also utilize other machine learning techniques such as random forest regression, and polynomial regression to compare and improve our models. We analyze the accuracy and performance of our models using metrics such as R-squared and mean squared error.. 

## Installation
---------------
To install the necessary packages, run the following command:

```pip install -r requirements.txt```

## Usage
--------
To use this project, [insert details about how to use the project here].

## Results
----------
The results of this project showed Our models accurately predict future temperature trends with a high degree of accuracy. We demonstrate the effectiveness of our models using visualizations and statistical analysis. Our results can be used to inform and guide decisions related to climate change and its impacts.. 

## Conclusion
-------------
In conclusion, this project demonstrated that Our project demonstrates the power of machine learning techniques in predicting future climate trends. By accurately forecasting temperature patterns, we can better understand the impacts of climate change and make informed decisions to mitigate its effects..

## Contributing
---------------
Contributions are welcome. If you'd like to contribute to this project, please open an issue to discuss your ideas or submit a pull request.

## Acknowledgements
----------------
[Weather Underground] - [https://www.wunderground.com/]
[Stack Overflow] - [https://stackoverflow.com/]


## Authors
-------
[Shai Shillo & Ofek Daida] - [https://github.com/ShaiShillo]
