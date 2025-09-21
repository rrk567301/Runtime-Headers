@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)_init;
- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
