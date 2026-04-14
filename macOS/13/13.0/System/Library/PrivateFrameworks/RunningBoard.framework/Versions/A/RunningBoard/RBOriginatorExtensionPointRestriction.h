@class NSString;

@interface RBOriginatorExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)allEntitlements;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)_initWithExtensionPoint:(id)a0;

@end
