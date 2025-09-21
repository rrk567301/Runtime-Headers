@interface SysKeyChainConfig : NSObject

+ (id)sharedSysKeyChainConfig;

- (void)setKeyForDomain:(id)a0;
- (char)setODSDPassword:(id)a0 accountName:(id)a1;
- (void)setRestrictAppInstallations:(unsigned long long)a0;
- (void)setRestrictAppInstallations:(char)a0 allowCaspianIdentifiedApps:(char)a1;
- (int)storeKeyInSystemKeychain:(id)a0 forUser:(id)a1 serverURL:(id)a2 description:(id)a3;
- (char)storeSystemKeychainPassword:(id)a0 account:(id)a1 service:(id)a2;

@end
