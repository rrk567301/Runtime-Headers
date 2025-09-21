@interface SKGPhones : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)phoneWithPhoneNumber:(id)a0 inGraph:(id)a1;

- (void)enumeratePhonesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPhoneNode:(id)a0 inGraph:(id)a1;

@end
