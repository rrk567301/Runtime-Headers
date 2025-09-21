@interface SKGEntities : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)entityWithEntityIdentifier:(id)a0 inGraph:(id)a1;

- (void)enumerateEntitiesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithEntityNode:(id)a0 inGraph:(id)a1;

@end
