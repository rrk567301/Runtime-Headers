@interface SKGPersonas : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)personasWithPersona:(id)a0 inGraph:(id)a1;

- (void)enumeratePersonasInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPersonaNode:(id)a0 inGraph:(id)a1;

@end
