@interface SKGReferences : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)referencesWithReference:(id)a0 inGraph:(id)a1;

- (void)enumerateReferencesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithReferenceNode:(id)a0 inGraph:(id)a1;

@end
