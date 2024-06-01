// 1. question...

//1.delete(last,end,middle)*******************************
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//    struct node* newnode = new node(t_data);
//      if(head == NULL)
//      {
//       head = newnode;
//      }
//      else
//      {
//        newnode->next = head;
//        head = newnode;
//      } 
//}
//
//delete_first()
//{
//if (head == NULL) {
//            cout << "List is empty. Nothing to delete.\n";
//            return 0;
//        }
//     struct node* temp = head;
//     head = head->next;
//     delete temp;  
//}
//
//void last_delete()
//{
//     if (head == NULL) {
//            cout << "List is empty. Nothing to delete.\n";
//            return;
//        }
//        if (head->next == NULL) {
//            delete head;
//            head = NULL;
//            return;
//        }
//struct node *temp = head;
//while(temp->next->next != NULL)
//{
//temp = temp->next;
//}
//
//delete temp->next->next;
//temp->next = NULL;
//}
//
//void middle_delete(int pos)
//{
//  if (head == NULL) {
//            cout << "List is empty. Nothing to delete.\n";
//            return;
//        }
//        if (pos <= 0) {
//            cout << "Invalid position.\n";
//            return;
//        }
//        if (pos == 1) {
//            delete_first();
//            return;
//        }
//     
//	struct node* temp = head;
//	struct node* nnode;
//	int count = 1;
//	while(temp->next != NULL && count < pos-1)
//	{
//		temp = temp->next;
//		count++;
//	}
//	nnode = temp->next;
//	temp->next = temp->next->next;
//	delete nnode;
//}
//void display()
//{
//	if (head == NULL) {
//            cout << "List is empty.\n";
//            return;
//        }
//    struct node *temp = head;
//    while(temp != NULL)
//     {
//       cout<<endl<<temp->data<<endl;
//       temp = temp->next;
//     }
//}
//
//};
//int main()
//{
//linklist ll;
//int ch,t_data,pos;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.delete first."<<endl;
//cout<<"3.delete last."<<endl;
//cout<<"4.delete middle."<<endl;
//cout<<"4.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//          case 1:
//                cout<<"enter data : ";
//                cin>>t_data;
//                ll.add_first(t_data); 
//          break;
//         
//		  case 2:
//                ll.delete_first();
//                break;
//
//          case 3:
//                ll.last_delete();
//                break;
//
//          case 4:
//                cout<<"enter the position to delete :";
//                cin>>pos;
//                ll.middle_delete(pos);
//
//          case 5:
//                ll.display();
//                break;
//            }
//         }while(ch != 0);
//return 0;
//}
//


//2.add (last ,middle,end)***********************
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//}
//
//void add_last(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//   else
//   {
//    struct node *temp = head;
//    while(temp->next != NULL)
//       {
//     temp = temp->next;
//  }
//temp->next = newnode;
//newnode->next = NULL;
//}
//}
//
//
//void add_middle(int t_data,int pos)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
//struct node *temp = head;
//int count =1;
//while(temp != NULL && count < pos-1)
//{
//temp = temp->next;
//count++;
//}
//newnode->next = temp->next;
//temp->next = newnode;
//
//
//}
//}
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data,pos;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.add last."<<endl;
//cout<<"3.add middle."<<endl;
//cout<<"4.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//case 1:
//cout<<"enter data : ";
//cin>>t_data;
//ll.add_first(t_data);
//            break;
//       case 2:
//            cout<<"enter data : ";
//cin>>t_data;
//ll.add_last(t_data);
//            break;
//       case 3:
//           cout<<"enter data : ";
//cin>>t_data;
//   cout<<endl<<"enter pos : ";
//cin>>pos;
//ll.add_middle(t_data,pos);
//            break;
//       case 4:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//3.rverse the list*******************
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//}
//  void revrse()
//  {
//  	 {
//    struct node *prev = NULL;
//    struct node *current = head;
//    struct node *next = NULL;
//
//    while (current != NULL) {
//        next = current->next; 
//        current->next = prev; 
//
//     
//        prev = current;
//        current = next;
//    }
//
//   
//    head = prev;
//}
//
//  }
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.revrse the list"<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//      case 1:
//          cout<<"enter data : ";
//          cin>>t_data;
//          ll.add_first(t_data);
//          break;
//       
//       case 2:
//       	   ll.revrse();
//       case 3:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//4.serch*************
//#include<iostream>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//
//void add_first(int t_data)
//{
//struct node* newnode = new node(t_data);
//if(head == NULL)
//{
//head = newnode;
//
//}
//else
//{
// newnode->next = head;
// head = newnode;
//   }
//}
//
//void search(int key) {
//        struct node *current = head;
//        int count = 1;
//        while (current != NULL) {
//        
//            if (current->data == key) {
//                cout<<endl<<"element is found  "<<endl;
//                cout<<endl<<"number of the pos is : "<<count<<endl;
//				
//            }
//            current = current->next;
//            count++;
//        }
//  
//            
//      }
//    
//void display()
//{
//struct node *temp = head;
//while(temp != NULL)
//{
// cout<<endl<<temp->data<<endl;
//  temp = temp->next;
//}
//}
//};
//int main()
//{
//linklist ll;
//int ch,t_data,key;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add first. "<<endl;
//cout<<"2.serch in list."<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//      case 1:
//          cout<<"enter data : ";
//          cin>>t_data;
//          ll.add_first(t_data);
//          break;
//       
//      case 2:
//      	    cout << "Enter the element to search: ";
//            cin >> key;
//            ll.search(key);
//            break;
//       case 3:
//        ll.display();
//        break;
//}
//}while(ch != 0);
//return 0;
//}

//5.sort ************************
//6.insert data in sorted order***********
//7. update a given element********
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//struct node{
//int data;
//struct node *next;
//node(int t_data)
//{
//data = t_data;
//next = NULL;
//}
//};
//class linklist{
//struct node *head;
//public:
//linklist()
//{
//head = NULL;
//}
//void add_first(int t_data)
//{
//    struct node* newnode = new node(t_data);
//      if(head == NULL)
//      {
//       head = newnode;
//      }
//      else
//      {
//        newnode->next = head;
//        head = newnode;
//      } 
//}
//void update_list(int key)
//{
//	struct node *temp =head;
//	int count=1,v;
//	while(temp->next != NULL)
//	{
//		if(temp->data == key)
//		{
//			cout<<endl<<"enter the updated value : ";
//			cin>>v;
//			temp->data = v;
//			break;
//		}
//		temp = temp->next;
//	}
//}
//void display()
//{
//	if (head == NULL) {
//            cout << "List is empty.\n";
//            return;
//        }
//    struct node *temp = head;
//    while(temp != NULL)
//     {
//       cout<<endl<<temp->data<<endl;
//       temp = temp->next;
//     }
//}
//
//};
//int main()
//{
//linklist ll;
//int ch,t_data,key;
//do{
//cout<<"\n______________________\n";
//cout<<"1.add list. "<<endl;
//cout<<"2.update a given element."<<endl;
//cout<<"3.display."<<endl;
//cout<<"\n______________________\n";
//cout<<"enter the ch .";
//cin>>ch;
//cout<<"\n**************\n";
//
//switch(ch)
//{
//          case 1:
//                cout<<"enter data : ";
//                cin>>t_data;
//                ll.add_first(t_data); 
//          break;
//    
//          case 2:
//          	cout<<"enter key : ";
//                cin>>key;
//                 ll.update_list(key);
//				 break;  	
//          case 3:
//                ll.display();
//                break;
//            }
//         }while(ch != 0);
//return 0;
//}
// 8. from a given list delete data in sorted order


//****************************************************
//****************************************************
//2 questions...


