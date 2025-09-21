@class NSString;

@interface RBTargetExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)allEntitlements;
- (id)_initWithExtensionPoint:(id)a0;
- (char)allowsContext:(id)a0 withError:(id *)a1;

@end
