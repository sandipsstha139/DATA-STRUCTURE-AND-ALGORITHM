
void Reverse()
{
    struct Node *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current !=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    head=prev;
}

