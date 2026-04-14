@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)dictionaryRepresentation;
- (id)allEntitlements;
- (id)_init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
