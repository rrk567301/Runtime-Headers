@interface SKGNameKeys : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;

- (void)enumerateNameKeysInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithNameKeyNode:(id)a0 inGraph:(id)a1;

@end
