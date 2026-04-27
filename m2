def find_maximum(num1, num2, num3):
  if num1 >= num2 and num1 >= num3:
    maximum = num1
  elif num2 >= num1 and num2 >= num3:
    maximum = num2
  else:
    maximum = num3
  return maximum
