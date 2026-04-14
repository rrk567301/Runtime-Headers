@interface SKGUsers : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)usersInGraph:(id)a0;

- (void)enumerateUsersInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithUserNode:(id)a0 inGraph:(id)a1;

@end
