CC=g++
FLAG = -Wall -Werror -std=c99
MDir=App/Menu/
RQDir=App/RQuestions/
MQDir=App/MQuestions/
RMDir=App/RussianMenu/
MMDir=App/MathMenu/
OBJECKTALL=$(MDir)main.o $(MDir)Back.o $(MDir)Menu.o $(RQDir)RfuncAnswer.o $(MQDir)funcAnswer.o $(RQDir)Rquestions1.o $(RQDir)Rquestions2.o $(RQDir)Rquestions3.o $(RQDir)Rquestions4.o $(RQDir)Rquestions5.o $(RQDir)Rquestions6.o $(RQDir)Rquestions7.o $(RQDir)Rquestions8.o $(RQDir)Rquestions9.o $(RQDir)Rquestions10.o $(MQDir)MQuestions1.o $(MQDir)MQuestions2.o $(MQDir)MQuestions3.o $(MQDir)MQuestions4.o $(MQDir)MQuestions5.o $(MQDir)MQuestions6.o $(RMDir)Russian.o $(RMDir)RRes.cpp $(MMDir)Math.o $(MMDir)MRes.o

all: QuizzRunner

QuizzRunner: $(OBJECKTALL) test
	$(CC) $(OBJECKTALL) -o QuizRunner

main.o: $(MDir)main.cpp
	$(CC) 

Back.o: $(MDir)Back.cpp 
	$(CC)

Menu.o: $(MDir)Menu.cpp 
	$(CC)

RfuncAncwer.o: $(RQDir) 
	$(CC)

funcAncwer.o: $(MQDir) 
	$(CC)

Rquestions1.o: $(RQDir)Rquestions1.cpp 
	$(CC) 

Rquestions2.o: $(RQDir)Rquestions2.cpp 
	$(CC) 

Rquestions3.o: $(RQDir)Rquestions3.cpp 
	$(CC) 

Rquestions4.o: $(RQDir)Rquestions4.cpp 
	$(CC) 

Rquestions5.o: $(RQDir)Rquestions5.cpp 
	$(CC) 

Rquestions6.o: $(RQDir)Rquestions6.cpp 
	$(CC) 

Rquestions7.o: $(RQDir)Rquestions7.cpp 
	$(CC) 

Rquestions8.o: $(RQDir)Rquestions8.cpp 
	$(CC) 

Rquestions9.o: $(RQDir)Rquestions9.cpp 
	$(CC) 

Rquestions10.o: $(RQDir)Rquestions10.cpp 
	$(CC) 	

MQuestions1.o: $(MQDir)MQuestions1.cpp 
	$(CC) 

MQuestions2.o: $(MQDir)MQuestions2.cpp 
	$(CC) 

MQuestions3.o: $(MQDir)MQuestions3.cpp 
	$(CC) 

MQuestions4.o: $(MQDir)MQuestions4.cpp 
	$(CC) 

MQuestions5.o: $(MQDir)MQuestions5.cpp 
	$(CC) 

MQuestions6.o: $(MQDir)MQuestions6.cpp 
	$(CC) 

RRes.o: $(RMDir)RRes.cpp 
	$(CC) 

Russian.o: $(RMDir)Russian.cpp 
	$(CC) 

MRes.o: $(MMDir)MRes.cpp 
	$(CC) 

Math.o: $(MMDir)Math.cpp 
	$(CC)  


