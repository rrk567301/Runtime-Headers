@class NSMutableDictionary;

@interface ACCredentialCache : NSObject {
    unsigned int _validityDuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _credentialCacheLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _expirersLock;
}

@property (retain) NSMutableDictionary *expirersByCredentialKey;
@property (retain) NSMutableDictionary *cachedCredentials;

+ (void)__enableCache;
+ (BOOL)_cacheEnabled;
+ (id)_credentialKeyForAccount:(id)a0 serviceID:(id)a1;

- (id)initWithValidityDuration:(unsigned int)a0;
- (void).cxx_destruct;
- (void)_clearAllCaches;
- (void)_handleKeybagFirstUnlocked;
- (void)cacheCredential:(id)a0 forAccount:(id)a1 serviceID:(id)a2;
- (id)cachedCredentialForAccount:(id)a0 serviceID:(id)a1;
- (void)clearCachedCredentialsForAccount:(id)a0;
- (void)clearCachedCredentialsForAccountID:(id)a0;

@end
