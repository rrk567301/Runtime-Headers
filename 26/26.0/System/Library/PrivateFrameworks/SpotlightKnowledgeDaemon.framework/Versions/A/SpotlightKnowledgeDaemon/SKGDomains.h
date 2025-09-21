@interface SKGDomains : SKGNodes

+ (id)labels;
+ (Class)nodeClass;
+ (Class)edgeClass;
+ (id)domainsWithDomain:(id)a0 inGraph:(id)a1;

- (void)enumerateDomainsInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithDomainNode:(id)a0 inGraph:(id)a1;

@end
