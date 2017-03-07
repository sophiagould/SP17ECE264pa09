#include "answer09.h"
#include "linkedlist.h"
bool isCircular(const node_t * head)
{
	const node_t * sptr = head;
	const node_t * fptr = head;

	while (fptr != NULL){
		if(sptr){
			sptr = sptr->next;
		}
		else{
			return false;
		}
		if(fptr){
			fptr = fptr->next;
		}
		else{
			return false;
		}
		
		if(fptr){
			fptr = fptr->next;
		}
		else{
			return false;
		}
		if(sptr == fptr){
			return true;
		}
	}
	return false;
}
