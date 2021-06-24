
Number_correctly_predicted = 0
output_column = []
A = []
my_data = pd.read_excel('Trace_01.xlsx',usecols = ['inputs']).values.tolist()

number_of_data_values = len(my_data)


for i in my_data:
    for j in i:
        A.append(j)

# calculating accuracy
for i in A:
    if (i == 0):
        Number_correctly_predicted += 1
        output_column.append("Correct")
    elif (i==1):
        output_column.append("Incorrect")
    else:
        print("It's an error!!")


print("Accuracy :", (Number_correctly_predicted/number_of_data_values) * 100)