@class NSString;

@interface RBTargetEntitlementDomainRestriction : RBDomainRestriction {
    NSString *_entitlement;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)allEntitlements;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)_initWithEntitlement:(id)a0;

@end
