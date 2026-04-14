@class NSString;

@interface RBTargetExtensionPointRestriction : RBDomainRestriction {
    NSString *_extensionPoint;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithExtensionPoint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;

@end
