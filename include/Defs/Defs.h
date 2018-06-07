Struktura Point3d (WRS) ------ Jest klasa Point3d w (W) -> mapping_defs.h . 


    - troche inna konstrukcja. Od razu caly wektor wspolrzednych x y z + dostepna informacja o 		kolorze
    
    - Inne konstruktory.
    
    - Uzywane w Joint.h i RobotLeg.h
    
    ## Można dodać odpowiednie metody w klasie w W
	-> Powinna być jedna






    
Struktura Color uzywana w WRS)defs.h), w W klasa RGBA (mapping_defs.h)

    -stworzone w namespace graphics, a w W mapping

    ## powinno być jako jedno 
    
    
    
    
klasa Vertex uzywana w WRS, struktura Vertex w W (3dsloader.h)

    -W WRS jest bardzo duzo konstruktorow, a w W nie ma prawie nic

	## Powinien być jeden Vertex. 
	


	W W struktura Vertex jest praktycznie nie używana, w takim razie przenieść całą klasę z WRS
    
    
klasa Face w WRS. przechwouje dane Face, (trójkątów?) - z tego co widze nie ma takiego mechanizmu w W

	-Klasa Face = przeniesc
    
    -do przeniesienia z WRS - > struct JoinInfo, ObjectInfo, TorqueForce
    
    - Klasa commonFunc - przeniesc

	## cały namespace simulator trzeba przeniesc. W nim:
	
	struct JoinInfo, ObjectInfo, TorqueForce
    
   	 - Klasa commonFunc - przeniesc
	 
	 
	 
	 
	 Nie uzywac zaleznosci z ODE we wspoldzielonych strukturach (messengerach). Wszystko co wykorzystuje ODE ma byc uzywane pliku ODE, 
ewentualne konwertrry
