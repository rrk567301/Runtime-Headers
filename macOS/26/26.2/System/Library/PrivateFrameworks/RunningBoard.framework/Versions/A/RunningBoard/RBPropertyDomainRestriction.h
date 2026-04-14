@class NSString, NSNumber;

@interface RBPropertyDomainRestriction : RBDomainRestriction {
    NSString *_property;
    NSNumber *_numberValue;
    NSString *_stringValue;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)allEntitlements;
- (id)dictionaryRepresentation;
- (id)variantName;
- (id)_initWithProperty:(id)a0 value:(id)a1;
- (BOOL)allowsWithProperties:(id)a0 error:(id *)a1;

@end
