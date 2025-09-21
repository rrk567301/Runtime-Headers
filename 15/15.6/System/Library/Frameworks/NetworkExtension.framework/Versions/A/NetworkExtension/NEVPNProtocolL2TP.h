@class NSString, NSArray, NSData, NEIdentityKeychainItem, NEKeychainItem;

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP {
    char _machineIdentityDataImported;
    NEIdentityKeychainItem *_machineIdentity;
    NSData *_machineIdentityDataInternal;
}

@property long long machineAuthenticationMethod;
@property (copy) NSData *sharedSecretReference;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *machineIdentityReference;
@property (copy) NSString *localIdentifier;
@property (retain) NSArray *userPreferences;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct __SCNetworkInterface { } *)createInterface;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyLegacyIPSecDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (char)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)resetKeychainItemACLsWithConfiguration:(id)a0;
- (void)setIPSecSettingsFromLegacyDictionary:(id)a0;
- (char)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;
- (char)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;

@end
