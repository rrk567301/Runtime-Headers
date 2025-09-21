@class NSArray, NSString, NSData, NEKeychainItem;

@interface NEVPNProtocolIPSec : NEVPNProtocol

@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSArray *legacyProposals;
@property (copy) NSArray *legacyExchangeMode;
@property char extendedAuthPasswordPrompt;
@property long long authenticationMethod;
@property char useExtendedAuthentication;
@property (copy) NSData *sharedSecretReference;
@property (copy) NSString *localIdentifier;
@property (copy) NSString *remoteIdentifier;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (struct __SCNetworkInterface { } *)createInterface;
- (char)checkValidityAndCollectErrors:(id)a0;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { } *)a0;
- (char)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(long long)a0 keepIdentity:(BOOL)a1;
- (void)resetKeychainItemACLsWithConfiguration:(id)a0;
- (void)syncWithKeychainInDomain:(long long)a0 configuration:(id)a1 suffix:(id)a2;

@end
