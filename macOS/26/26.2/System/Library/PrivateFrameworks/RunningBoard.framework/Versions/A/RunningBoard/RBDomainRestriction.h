@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)_init;
- (id)description;
- (id)allEntitlements;
- (id)dictionaryRepresentation;

@end
