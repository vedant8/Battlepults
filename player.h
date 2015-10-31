#include"Cannon.cpp"
#include"Catapult.cpp"
#include"Block.cpp"
#include"tracker.cpp"

class Player//://public Cannon,public Catapult,public block
{
private:
    Cannon c1;
    Catapult c2;
    //impact i1;
    char choice;
        long int score;
        Block b[5];
        Block opp[5];
    public:
    Block b[5];
        int ctr;

    void setchoice()//allows player to choose what weapon he wants to use
    {

    }

    void creator(bool n)//creates a weapon depending on the player's choice
    {

    }

    void blockcreate(bool n)//creates blocks at the clicked positions
    {
    }

    void move(bool n)//moves either the cannon or the catapult
    {

    }

    int track(Block a[])//common tracking function,returns index of blown block
    {

    }

    void impact(int i)
    {

    }
    long int getScore()
    {

    }
    void firing(bool pl)//firing sequence,--> check if the pointer works
    {

    }

Block* getBlocks(){

}

void setOpp(Block &inp){
    }



    bool track(int w,Circle &C1)
    {

    }


};
