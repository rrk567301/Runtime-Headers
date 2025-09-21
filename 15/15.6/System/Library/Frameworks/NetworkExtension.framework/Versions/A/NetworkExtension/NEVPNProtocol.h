@class NEProxySettings, NSUUID, NSString, NSData, NEIdentityKeychainItem, NEKeychainItem, NEDNSSettings;

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding> {
    long long _keychainDomain;
    NSString *_keychainAccessGroup;
    NEIdentityKeychainItem *_identity;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSUUID *identifier;
@property (readonly) long long type;
@property char disconnectOnWake;
@property int disconnectOnWakeTimeout;
@property (copy) NEKeychainItem *passwordKeychainItem;
@property (copy) NSString *passwordEncryption;
@property (copy) NSData *identityReferenceInternal;
@property (copy) NSData *identityDataInternal;
@property char identityDataImported;
@property (copy) NSData *identityDataHash;
@property (copy) NEKeychainItem *identityDataPasswordKeychainItem;
@property (copy) NEDNSSettings *DNSSettings;
@property (copy) NSString *extensibleSSOProvider;
@property char disconnectOnIdle;
@property int disconnectOnIdleTimeout;
@property char disconnectOnUserSwitch;
@property char disconnectOnLogout;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSData *passwordReference;
@property (copy) NSData *identityReference;
@property (copy) NSData *identityData;
@property (copy) NSString *identityDataPassword;
@property char disconnectOnSleep;
@property (copy) NEProxySettings *proxySettings;
@property char includeAllNetworks;
@property char excludeLocalNetworks;
@property char excludeCellularServices;
@property char excludeAPNs;
@property char excludeDeviceCommunication;
@property char enforceRoutes;
@property (copy) NSString *sliceUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (struct __SCNetworkInterface { } *)createInterface;
- (void)syncWithKeychainInDomainCommon:(long long)a0;
- (void)addDisconnectOptions:(id)a0;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyLegacyDictionary;
- (void)copyPasswordsFromKeychainInDomain:(long long)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)initDisconnectOptions:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)initWithProtocolIdentifier:(id)a0;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (char)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)resetKeychainItemACLsWithConfiguration:(id)a0;
- (char)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;

@end
