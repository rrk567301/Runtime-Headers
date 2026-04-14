@class NSString, NSArray, NSData, NEIdentityKeychainItem, NEKeychainItem;

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP {
    BOOL _machineIdentityDataImported;
    NEIdentityKeychainItem *_machineIdentity;
    NSData *_machineIdentityDataInternal;
}

@property long long machineAuthenticationMethod;
@property (copy) NSData *sharedSecretReference;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *machineIdentityReference;
@property (copy) NSString *localIdentifier;
@property (retain) NSArray *userPreferences;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (struct __SCNetworkInterface { } *)createInterface;
- (BOOL)needToUpdateKeychain;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (void)resetKeychainItemACLsWithConfiguration:(id)a0;
- (id)copyLegacyIPSecDictionary;
- (void)setIPSecSettingsFromLegacyDictionary:(id)a0;

@end
