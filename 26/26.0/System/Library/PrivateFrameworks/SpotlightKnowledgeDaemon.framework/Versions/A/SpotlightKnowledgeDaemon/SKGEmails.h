@interface SKGEmails : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)emailWithEmailAddress:(id)a0 inGraph:(id)a1;

- (void)enumerateEmailsInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithEmailNode:(id)a0 inGraph:(id)a1;

@end
