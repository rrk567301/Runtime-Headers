@interface SKGPersons : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)personWithPersonIdentifier:(id)a0 inGraph:(id)a1;

- (void)enumeratePersonsInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPersonNode:(id)a0 inGraph:(id)a1;

@end
