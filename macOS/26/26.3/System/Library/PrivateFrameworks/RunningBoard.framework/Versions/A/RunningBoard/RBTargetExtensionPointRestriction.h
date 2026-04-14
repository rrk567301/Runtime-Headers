@class NSString;

@interface RBTargetExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)dictionaryRepresentation;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)description;
- (id)_initWithExtensionPoint:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
