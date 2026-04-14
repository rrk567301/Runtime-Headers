@class NSDictionary, NSArray, NSString, NSData, NEIdentityKeychainItem, NEKeychainItem, NSURL;

@interface NERelay : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long _keychainDomain;
    NSString *_keychainAccessGroup;
    NSArray *_certificates;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *identityReference;
@property (copy) NSData *identityReferenceInternal;
@property (copy) NSArray *certificateReferences;
@property (copy) NSData *identityDataInternal;
@property BOOL identityDataImported;
@property (copy) NSData *identityDataHash;
@property (copy) NEKeychainItem *identityDataPasswordKeychainItem;
@property (retain) NEIdentityKeychainItem *identity;
@property (copy) NSURL *HTTP3RelayURL;
@property (copy) NSURL *HTTP2RelayURL;
@property (copy) NSURL *dnsOverHTTPSURL;
@property (copy) NSString *syntheticDNSAnswerIPv4Prefix;
@property (copy) NSString *syntheticDNSAnswerIPv6Prefix;
@property (copy) NSDictionary *additionalHTTPHeaderFields;
@property (copy) NSArray *rawPublicKeys;
@property (copy) NSData *identityData;
@property (copy) NSString *identityDataPassword;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)syncWithKeychainInDomainCommon:(long long)a0;
- (void)clearKeychainItemsInDomain:(long long)a0 removeItems:(BOOL)a1;
- (void)copyPasswordsFromKeychainInDomain:(long long)a0;
- (struct __SecIdentity { } *)copySecIdentityRef;
- (void)setIdentityWithKey:(id)a0 keyRef:(id)a1;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;

@end
