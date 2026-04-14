@class NSArray;

@interface RBTargetsSelfDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)_init;
- (void).cxx_destruct;
- (id)description;
- (id)allEntitlements;
- (id)dictionaryRepresentation;

@end
