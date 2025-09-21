@class NSArray;

@interface RBCompoundAnyDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithRestrictions:(id)a0;
- (void).cxx_destruct;

@end
