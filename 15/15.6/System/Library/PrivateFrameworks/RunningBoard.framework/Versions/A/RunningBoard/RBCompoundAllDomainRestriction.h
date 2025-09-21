@class NSArray;

@interface RBCompoundAllDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allEntitlements;
- (id)_initWithRestrictions:(id)a0;
- (char)allowsContext:(id)a0 withError:(id *)a1;

@end
