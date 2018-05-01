OBJ = main.o menu.o triangle.o circle.o rectangle.o square.o horizon.o intersect.o
APPNAME = drawing.a

#link rule
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
	
#compiling rule
%.o : %.c
	gcc -c -o $@ $<
		
clean :
	rm $(OBJ) $(APPNAME)
			
tar :
	tar cf project.tar *
