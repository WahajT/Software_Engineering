// #include<iostream>
// #include<string>

// using namespace std;


TASK#01
// int index(char *c, char needle)
// {
// 	char *ptr;
// 	ptr=c;
// 	while(*c !='\0')
// 	{
// 		if(*ptr==needle)
// 		{
// 			cout<<"found"<<endl;
// 			return 0;
// 		}
		
// 		ptr++;
// 	}
// }
// int count_digits(char *c)
// {
// 	char *st;
// 	st = c;
// 	int count = 0;

	
// 	while(*c!='\0')
//     {
//          if(*c>='0' && *c<='9')
//         {
//             count++;
//         }
       
 
//         c++;
//     }
	
// 	return count;

	
// }
// int main()
// {
// string haystack; 
//     char needle; 

//     haystack = "A quick brown fox (id: 45) jumped over a lazy dog (id: 9)"; 
//     needle = 'j'; 

//     int loc, count; 
//     loc = index(&haystack[0], needle); 
//     cout << "Loc: " << loc << endl; 

//     count = count_digits(&haystack[0]); 
//     cout << "Count: " << count << endl;
//     return 0;
// }
















































































Task#02




// #include<iostream>
// using namespace std;
// void palindrome(string str ,int index)
// {
// 	char *arr;
// 	//int index;
// 	cout<<"size of index  : "<<index<<endl;
// 	arr = new char[index];
// 	arr = &str[0];
// 	char *temp = arr;
// 	char *temp1 = arr;
	
// 	for(int i=0; i<index; i++)
// 	{
// 		temp1 = temp1++;
// 	}
	
// 	for(int i=0; i<index/2; i++)
// 	{
// 		if(*temp=*temp1)
// 		{
// 			temp = temp++;
// 			temp1 = temp1--;
// 		}
// 		else
// 		{
// 			cout<<"not palindrome"<<endl;
// 			break;
// 		}
// 		if(temp==temp1)
// 		{
// 			break;
// 		}
		
// 	}
// 	cout<<"is palindrome"<<endl;
// }

// int main()
// {cout<<"madam"<<" ";
// 	palindrome("madam",5);
//     cout<<"abba"<<" ";
//     palindrome("abba",4);
// 	return 0;
// }