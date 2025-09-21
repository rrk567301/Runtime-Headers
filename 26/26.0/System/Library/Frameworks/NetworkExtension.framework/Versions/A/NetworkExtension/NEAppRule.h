@class NSArray, NSString;

@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    struct __SecRequirement { } *_cachedRequirement;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL noRestriction;
@property (retain) NSArray *cachedMachOUUIDs;
@property (copy) NSArray *matchAccountIdentifiers;
@property BOOL noDivertDNS;
@property BOOL allowEmptyDesignatedRequirement;
@property (readonly) NSString *matchSigningIdentifier;
@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSString *matchPath;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *matchTools;

- (id)copyLegacyDictionary;
- (BOOL)signingIdentifierAllowed:(id)a0 domainsOrAccountsRequired:(out BOOL *)a1;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)overlapsWithRule:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSigningIdentifier:(id)a0 designatedRequirement:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithSigningIdentifier:(id)a0;
- (void).cxx_destruct;

@end
