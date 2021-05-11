#include <iostream>
#include <vector>
using namespace std;
struct Filosofo{
	string nombre;
	int estado;
};
void comer(vector<Filosofo> Filosofos){
	Filosofos[0].estado=2;
	for(int i=0;i<Filosofos.size();i++){
		if(Filosofos[i].estado==2){
			cout<<Filosofos[i].nombre<<" esta comiendo"<<endl;
		}
		for(int j=i+1;j<Filosofos.size();j++){
				cout<<Filosofos[j].nombre<<" esta esperando"<<endl;
		}
		Filosofos[i+1].estado=2;
	}
}
int main(){
	vector<Filosofo> Filosofos;
	Filosofo Temporal;
	Temporal.nombre="Platon";Temporal.estado=1;
	Filosofos.push_back(Temporal);
	Temporal.nombre="Aritoteles";Temporal.estado=1;
	Filosofos.push_back(Temporal);
	Temporal.nombre="Socrates";Temporal.estado=1;
	Filosofos.push_back(Temporal);
	comer(Filosofos);
}
