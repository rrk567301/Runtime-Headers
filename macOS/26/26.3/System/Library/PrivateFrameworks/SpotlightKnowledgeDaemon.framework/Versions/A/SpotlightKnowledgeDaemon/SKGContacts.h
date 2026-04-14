@interface SKGContacts : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)contactWithContactIdentifier:(id)a0 inGraph:(id)a1;

- (void)enumerateContactsInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithContactNode:(id)a0 inGraph:(id)a1;

@end
