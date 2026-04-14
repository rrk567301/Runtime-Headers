@class NSDictionary, NSSet;

@interface RBInheritanceCollection : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration> {
    NSDictionary *_inheritancesByEnvironment;
    NSSet *_inheritances;
    NSSet *_namespaces;
}

+ (id)collectionWithInheritances:(id)a0;

- (id)inheritancesForEnvironment:(id)a0;
- (unsigned long long)count;
- (id)_initWithCollection:(id)a0;
- (id)description;
- (id)allInheritances;
- (id)_initWithInheritances:(id)a0;
- (void).cxx_destruct;
- (id)allEnvironments;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allNamespaces;

@end
