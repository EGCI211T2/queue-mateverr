#ifndef node_h
#define node_h
class NODE{
    int data;
    NODE* nextPtr;
public:
    int orde, qty;
    NODE(int, int);
    ~NODE();
    void set_next(NODE*);
    //NODE* get_next();
    //int get_value();
};
typedef NODE* NodePtr;


NODE::NODE(int o, int q){
    ode = o;
    qty = q;
    nextPtr = NULL;
   
}

NODE* NODE::get_next()
{
    return nextPtr;
}


/*
int NODE::get_value(){
    return data;

}
*/


/*
void NODE::set_next(NODE *t){
     nextPtr=t;

}
*/

/*
NODE::~NODE(){
     cout<<" "<<data<<endl;

}
*/





#endif
