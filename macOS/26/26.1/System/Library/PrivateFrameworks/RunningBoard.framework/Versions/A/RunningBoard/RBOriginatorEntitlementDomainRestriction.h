@class NSString;

@interface RBOriginatorEntitlementDomainRestriction : RBDomainRestriction {
    NSString *_entitlement;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)allEntitlements;
- (id)description;
- (id)_initWithEntitlement:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
