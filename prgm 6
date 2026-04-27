def adding(s,val):
   if val in s:
      print("Already exist")
   else:
      s.add(val)
      print("After adding: ",s)
def delete(s,val):
   if val in s:
      s.remove(val)
      print("After removing: ",s)
   else:
      print("Element not exist")
lst=input("Enter values with comma seperated: ").split(',')
s=set()
for i in lst:
   s.add(int(i))
print("Original set: ",s)
v1=int(input("Enter value for adding: "))
adding(s,v1)
v2=int(input("Enter value for removing: "))
delete(s,v2)
