@interface SKGNames : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)nameWithName:(id)a0 inGraph:(id)a1;

- (void)enumerateNamesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithNameNode:(id)a0 inGraph:(id)a1;

@end
