@class NSString;

@interface RBTargetEntitlementDomainRestriction : RBDomainRestriction {
    NSString *_entitlement;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithEntitlement:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
