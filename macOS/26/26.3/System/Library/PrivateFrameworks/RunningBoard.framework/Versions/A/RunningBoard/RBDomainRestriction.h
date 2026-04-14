@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)dictionaryRepresentation;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)description;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
