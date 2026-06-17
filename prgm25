def common(list1,list2):
    for x in list1:
        if x in list2:
            return True
    return False
def remove_value(lst,value):
    if value in lst:
        lst.remove(value)
    return lst
list1 = []
n1 = int(input("How many elements in list1: "))
for i in range(n1):
    list1.append(int(input("Enter value: ")))
list2 = []
n2 = int(input("How many elements in list2: "))
for i in range(n2):
    list2.append(int(input("Enter value: ")))
if (list1 == []):
    print "List1 is empty"
else:
    print "List1 is not empty"
if (list2 == []):
    print "List2 is empty"
else:
    print "List2 is not empty"
if common(list1,list2):
    print "At least one common element exists"
else:
    print "No common element"
num = int(input("Enter element to remove from list1: "))
list1 = remove_value(list1,num)
print "List1 after removing element: ",list1
pairs = []
length = min(len(list1), len(list2))
for i in range(length):
   if (list1[i] + list2[i] > 40):
      pairs.append((list1[i], list2[i]))
print "Pairs whose sum is greater than 40:"
print pairs
