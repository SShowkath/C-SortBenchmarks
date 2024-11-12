#include <string>
#include <iostream>
#include <list>
using namespace std;

int c1 =0, c2=0, c3=0, c4=0, c5 = 0;
int s1=0, s2=0, s3=0, s4=0;

void swap(int *a, int *b) {
    
  int t = *a;
  *a = *b;
  *b = t;
}
    
int partition(int array[], int low, int high) {
    
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        c4++;
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]); 
      s4++;
    }
  }
  
  // swap pivot with the greater element at i
  swap(&array[i + 1], &array[high]);
  s4++;
  
  // return the partition point
  return (i + 1);
}


void quickSort(int array[], int low, int high) {
  if (low < high) {
      //c4++;
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// Merge Sort
    class node { 
    public: 
    	int data; 
    	node* next; 
    }; 
    
    // Merging two sorted lists.
    node* MergeSortedList(node* lst1, node* lst2) 
    { 
    	node* result = NULL; 
    
    	// Base Cases
    	if (lst1 == NULL) 
    		return (lst2); 
    	else if (lst2 == NULL) 
    		return (lst1); 
    
    	// recursively merging two lists
    	
    	if (lst1->data <= lst2->data) { 
    	    
    		result = lst1; 
    		result->next = MergeSortedList(lst1->next, lst2); 
    	} 
    	else { 
    		result = lst2; 
    		result->next = MergeSortedList(lst1, lst2->next); 
    	} 
    	c5++;
    	return result; 
    } 
    
    // Splitting two into halves.
    // If the size of the list is odd, then extra element goes in the first list.
    void SplitList(node* source, node** front, node** back) 
    { 
    	node* ptr1; 
    	node* ptr2; 
    	ptr2 = source; 
    	ptr1 = source->next; 
    
    	// ptr1 is incrmented twice and ptr2 is icremented once.
    	while (ptr1 != NULL) { 
    		ptr1 = ptr1->next; 
    		if (ptr1 != NULL) { 
    			ptr2 = ptr2->next; 
    			ptr1 = ptr1->next; 
    		} 
    	} 
    
    	// ptr2 is at the midpoint.
    	*front = source; 
    	*back = ptr2->next; 
    	ptr2->next = NULL; 
    } 
    
    
    // Merge Sort
    void MergeSort(node** thead) 
    { 
    	node* head = *thead; 
    	node* ptr1; 
    	node* ptr2; 
    
      // Base Case
    	if ((head == NULL) || (head->next == NULL)) { 
    		return; 
    	} 
    
    	// Splitting list
    	SplitList(head, &ptr1, &ptr2); 
    
    	// Recursively sorting two lists.
    	MergeSort(&ptr1); 
    	MergeSort(&ptr2); 
    	// Sorted List.
    	*thead = MergeSortedList(ptr1, ptr2); 
    } 
void printList(node* tnode) 
{ 
	while (tnode != NULL) { 
		cout << tnode->data << " "; 
		tnode = tnode->next; 
	} 
} 
    
    // Push function for inserting nodes in the list.
    void push(node** thead, int new_data) 
    { 
    	node* new_node = new node(); 
    	new_node->data = new_data; 
    	new_node->next = (*thead); 
    	(*thead) = new_node; 
    } 

int main()
{
    srand (time(NULL));
    int one[5000];
    int two[5000];
    int three[5000];
    int four[5000];
    node* res = NULL; 
	node* MyList = NULL; 
    for (int i = 0; i < 5000; i++)
    {
        int x = rand() % 5000;
        one[i] = x;
        two[i] = x;
        three[i] = x;
        four[i] = x;
        push(&MyList, x); 
    }
    
    //bubble sort
    int c, j, temp = 0;
    for (c = 0; c< 5000; c++)
    {
       for (j = c+1; j<5000; j++)
       {
          c1++;
          if (one[j] < one[c])
          {
             temp = one[c];
             one[c] = one[j];
             one[j] = temp;
             s1++;
          }   
       }
    }
    
    //selection sort
    int  imin, a, b;
    for(a = 0; a < 4999; a++) {
      imin = a;   //get index of minimum data
      for(b = a+1; b<5000; b++)
      {
          c2++;
         if(two[b] < two[imin])
         {
            imin = b;
            
         }
      }
         //placing in correct position
    s2++;
    swap(two[a], two[imin]);
    
   }
   
   
    //insertion sort
    int  key, z, x;
    for (z = 1; z < 5000; z++)
    {
        key = three[z];
        x = z - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
       
        while (x >= 0 && three[x] > key)
        { 
            c3++;
            three[x + 1] = three[x];
            x = x - 1;
        }
        three[x + 1] = key;
        s3++;
    }
    
    quickSort(four, 0, 5000);
    MergeSort(&MyList);
    
    cout << "bubble:  "<< (c1 + s1) << endl;
    cout <<"selection:  " << c2+s2 << endl;
    cout << "insertion:  " << c3+s3 << endl;
    cout << "quick:  " << c4+s4 << endl;
    cout << "merge:  " << c5 << endl;
    return 0;
}




