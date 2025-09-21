@class NSArray, NSString;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    struct __SecRequirement { } *_cachedRequirement;
}

@property (class, readonly) char supportsSecureCoding;

@property char noRestriction;
@property (retain) NSArray *cachedMachOUUIDs;
@property (copy) NSArray *matchAccountIdentifiers;
@property char noDivertDNS;
@property char allowEmptyDesignatedRequirement;
@property (readonly) NSString *matchSigningIdentifier;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSString *matchPath;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *matchTools;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (id)initWithSigningIdentifier:(id)a0;
- (id)initWithSigningIdentifier:(id)a0 designatedRequirement:(id)a1;
- (char)overlapsWithRule:(id)a0;
- (char)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out char *)a1;

@end
