@class NSArray;

@interface RBTargetsHostedDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)allEntitlements;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
