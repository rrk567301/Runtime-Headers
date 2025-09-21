@interface SOKeychainHelper : NSObject

- (struct __SecIdentity { } *)_identityForUUIDString_macOS:(id)a0;
- (int)addCredentialsToKeychainWithService:(id)a0 withUsername:(id)a1 withPassword:(id)a2 requireUserPresence:(char)a3;
- (char)hasCredentialsInKeychainWithService:(id)a0;
- (struct __SecIdentity { } *)identityForPersistientRef:(id)a0;
- (struct __SecIdentity { } *)identityForUUIDString:(id)a0;
- (int)removeCredentialsFromKeychainWithService:(id)a0;
- (int)retrieveCredentialsFromKeychainWithContext:(id)a0 service:(id)a1 returnedUsername:(id *)a2 returnedPassword:(id *)a3;

@end
