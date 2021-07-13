n=int(input())
for i in range(n):
    L,R=input().split()
    L=int(L)
    R=int(R)
    maximum=-1
    result=-1
    for num in range(L,R+1):
        copied_num=num
        product=1
        while copied_num>0:
            r=copied_num%10
            product=product*r
            copied_num=copied_num//10
    
        if product>maximum:
            maximum=product
            result=num
        # copied_num=str(num)
        # product=1
        # for k in range(len(copied_num)):
        #     product=product*int(copied_num[k])
        # if product>maximum:
        #     maximum=product
        #     result=num
    print(result)
-----------------------------------------------------------------
list1=input().split()
result=[]
adjacent_list=[]

for i in range(0,len(list1)):
    if i<len(list1)-1:
        if list1[i]<list1[i+1]:
            new_string=list1[i]+" "+list1[i+1]
        else:
            new_string=list1[i+1]+" "+list1[i]
        adjacent_list.append(new_string)
        
for i in range(0,len(list1)):      
    for j in range(i+2,len(list1)):
        if list1[i]<list1[j]:
            new_string=list1[i]+" "+list1[j]
        else:
            new_string=list1[j]+" "+list1[i]
            
        if new_string not in result and new_string not in adjacent_list:
            result.append(new_string)
result.sort()
for j in range(len(result)):
        print(result[j])
        
#print(adjacent_list)   
---------------------------------------------------------------------

list1=input().split()
key=int(input())
n=len(list1)

for i in range(0, n):
    list1[i] = int(list1[i])
    
listOfList=[]

for i in range(n-2):
    for j in range(i+1,n-1):
        triple=[]
        for k in range(j+1,n):
            if list1[i]+list1[j]+list1[k]==key:
                triple.append(list1[i])
                triple.append(list1[j])
                triple.append(list1[k])
                triple.sort()
            if len(triple)==3 and triple not in listOfList:
                listOfList.append(triple)
                triple=[]
        #print(sorted(triple)) 
#print(listOfList)
m=len(listOfList)
temp=[]

for i in range(0,m-1):
    for j in range(0,m-1-i):
        if listOfList[j][0]>listOfList[j+1][0]:
            listOfList[j],listOfList[j+1]=listOfList[j+1],listOfList[j]
            # temp=listOfList[j]
            # listOfList[j]=listOfList[j+1]
            # listOfList[j+1]=temp
        elif listOfList[j][0]==listOfList[j+1][0] and listOfList[j][1]>listOfList[j+1][1]:
            listOfList[j],listOfList[j+1]=listOfList[j+1],listOfList[j]
            # temp=listOfList[j]
            # listOfList[j]=listOfList[j+1]
            # listOfList[j+1]=temp
        elif listOfList[j][0]==listOfList[j+1][0] and listOfList[j][1]==listOfList[j+1][1]:
            listOfList[j],listOfList[j+1]=listOfList[j+1],listOfList[j]
            # temp=listOfList[j]
            # listOfList[j]=listOfList[j+1]
            # listOfList[j+1]=temp
            
for i in range(m):
    print(tuple(listOfList[i]))
    #print("("+str(listOfList[i][0])+",  "+str(listOfList[i][1])+",  "+str(listOfList[i][2])+")")
