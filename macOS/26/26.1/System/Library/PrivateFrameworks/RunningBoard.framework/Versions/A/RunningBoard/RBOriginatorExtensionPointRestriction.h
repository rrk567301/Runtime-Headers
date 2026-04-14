@class NSString;

@interface RBOriginatorExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)allEntitlements;
- (id)_initWithExtensionPoint:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
