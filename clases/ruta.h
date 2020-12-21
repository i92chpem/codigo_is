#ifndef RUTA_H
#define RUTA_H

#include <string>
using namespace std;

class Ruta{

	private:

		string nombre_, sendero_, fechahora_, tiemporecorrido_, dificultad_, monitor_,
		float km_;
		bool bicicleta_;

	public:

		Ruta(){

			nombre_="";
			sendero_="";
			fechahora_="";
			tiemporecorrido_="";
			dificultad_="";
			monitor_="";
			km_=0;
			bicicleta_=false;
		}

		string getRuta(){

			return nombre_;
		}

		string getSendero(){

			return sendero_;
		}

		string getDificultad(){

			return dificultad_;
		}

		float getDistancia(){

			return km_;
		}

		bool getBicicleta(){

			return bicicleta_;
		}

		string getInfo(){

			return nombre_+" "+sendero_+" "+dificultad_+" "+monitor_;
		}

};

#endif