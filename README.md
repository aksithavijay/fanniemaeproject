# fanniemaeproject
This project aims to simplify the process of homebuying by providing a comprehensive tool for evaluating potential homebuyers' readiness and offering actionable recommendations for improvement.

Team Members: Aksitha, Ayush, Tamanna, Charitha

Elements of the project:
- Project description/problem statement: Homebuyer Readiness Evaluation is an app that addresses the complexity of home buying by providing a list of potential homebuyers and their relevant data. The goal is to assess their readiness to purchase a home if they are not yet prepared.
- Project process:We added the Winform extension on Visual studio code. We then created an empty c++ Winform project where we were able to create the UI. We added input text boxes for each of the approval factors in the data set (ex: credit score, car payment, credit card payments). We also created a button variable that the user is able to press in order to change the text variable that outputs. In the button object, we converted the user inputs which were strings into doubles (numbers). We then performed the calculation for DTI by adding ( ccPayment + car payment + slPayment ) and dividing by GMI. We then placed a series of nested if statements to determine if the homebuyer is eligible or not. If the home buyer was eligible we adjusted the text variable output to state so. Lastly, we ran trial runs with the provided data set, debugged any errors in the code, and ran more trial runs to ensure that our code works. 

