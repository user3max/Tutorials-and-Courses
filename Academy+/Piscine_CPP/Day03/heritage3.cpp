
class Quadruped //Can access name, run() and legs
{
private:
	std::string name; //Only accesible from an Quadruped object

protected:
	Leg		legs[4]; //Accessible from an Quadruped or derived object

public:
	void run(); //Accessible from wherever
};

class Dog : public Quadruped // Can acces run() and legs
{

};

int main() //Can only access run()
{

}