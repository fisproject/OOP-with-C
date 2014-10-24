typedef struct person* Object;

Object CreatePerson(int a, bool g, const char* n);
void DeletePerson(Object obj);
int GetAge(Object obj);
char* GetName(Object obj);
void SetAge(Object obj, int new_a);
void SetName(Object obj, char* new_n);
void SetIsMan(Object obj, bool new_m);
bool GetIsMan(Object obj);
