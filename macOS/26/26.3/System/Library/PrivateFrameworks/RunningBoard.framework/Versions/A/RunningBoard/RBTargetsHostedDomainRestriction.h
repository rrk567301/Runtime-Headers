@class NSArray;

@interface RBTargetsHostedDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)dictionaryRepresentation;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)description;
- (id)_init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
