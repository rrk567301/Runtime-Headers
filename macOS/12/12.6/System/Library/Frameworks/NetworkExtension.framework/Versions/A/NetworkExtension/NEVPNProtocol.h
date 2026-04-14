@class NEProxySettings, NSString, NSUUID, NEIdentityKeychainItem, NSData, NEKeychainItem, NEDNSSettings;

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long keychainDomain;
@property (retain) NSString *keychainAccessGroup;
@property (retain) NEIdentityKeychainItem *identity;
@property (copy) NSUUID *identifier;
@property (readonly) long long type;
@property BOOL disconnectOnWake;
@property int disconnectOnWakeTimeout;
@property (copy) NEKeychainItem *passwordKeychainItem;
@property (copy) NSString *passwordEncryption;
@property (copy) NSData *identityReferenceInternal;
@property (copy) NSData *identityDataInternal;
@property BOOL identityDataImported;
@property (copy) NSData *identityDataHash;
@property (copy) NEKeychainItem *identityDataPasswordKeychainItem;
@property (copy) NEDNSSettings *DNSSettings;
@property (copy) NSString *extensibleSSOProvider;
@property BOOL disconnectOnIdle;
@property int disconnectOnIdleTimeout;
@property BOOL disconnectOnUserSwitch;
@property BOOL disconnectOnLogout;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSData *passwordReference;
@property (copy) NSData *identityReference;
@property (copy) NSData *identityData;
@property (copy) NSString *identityDataPassword;
@property BOOL disconnectOnSleep;
@property (copy) NEProxySettings *proxySettings;
@property BOOL includeAllNetworks;
@property BOOL excludeLocalNetworks;
@property BOOL enforceRoutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (BOOL)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)copyPasswordsFromKeychainInDomain:(long long)a0;
- (struct __SCNetworkInterface { } *)createInterface;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (id)initWithProtocolIdentifier:(id)a0;
- (id)type2str;
- (void)addDisconnectOptions:(id)a0;
- (void)initDisconnectOptions:(id)a0;
- (void)syncWithKeychainInDomainCommon:(long long)a0;

@end
