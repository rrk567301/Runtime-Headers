@class NSString;

@interface RBTargetExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (id)_initWithExtensionPoint:(id)a0;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
