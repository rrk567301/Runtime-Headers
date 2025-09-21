@interface SKGDisplayNames : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)displayNameWithDisplayName:(id)a0 inGraph:(id)a1;

- (void)enumerateDisplayNamesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithDisplayNameNode:(id)a0 inGraph:(id)a1;

@end
