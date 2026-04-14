@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)allEntitlements;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
