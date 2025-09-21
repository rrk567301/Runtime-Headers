@class NSMutableDictionary, NSTimer, NSArray;
@protocol NSObject;

@interface ICAuthenticationState : NSObject <NSCopying>

@property (class, readonly, nonatomic) ICAuthenticationState *sharedState;
@property (class, readonly, nonatomic) double defaultDeauthenticationTimeInterval;

@property (nonatomic, getter=isAuthenticatedWithDevicePassword) char authenticatedWithDevicePassword;
@property (retain, nonatomic) NSMutableDictionary *objectIDsToMainKey;
@property (nonatomic) long long blockingDeauthenticationCount;
@property (retain, nonatomic) NSTimer *deauthenticationTimer;
@property (nonatomic) char didAttemptToDeauthenticateWhileBlocked;
@property (retain, nonatomic) id<NSObject> passphraseChangeObserver;
@property (readonly, nonatomic, getter=isAuthenticated) char authenticated;
@property (readonly, nonatomic, getter=isBlockingDeauthentication) char blockingDeauthentication;
@property (readonly, nonatomic) char hasAuthenticatedObject;
@property (nonatomic) double deauthenticationTimeInterval;
@property (retain, nonatomic) NSArray *deauthenticationTimerRunLoopModes;

+ (void)setSharedState:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deauthenticate;
- (void)setCachedMainKey:(id)a0 forIdentifier:(id)a1;
- (char)setMainKeyInKeychain:(id)a0 forObject:(id)a1;
- (char)authenticateObjectWithKeychain:(id)a0;
- (id)mainKeyFromKeychainForKeyObject:(id)a0 decryptingObject:(id)a1 cipherVersion:(long long)a2;
- (char)addMainKeyToKeychainForObject:(id)a0;
- (char)authenticateAllNotesInAccount:(id)a0 withPassphrase:(id)a1;
- (char)authenticateObject:(id)a0 withPassphrase:(id)a1;
- (void)authenticateWithDevicePassword;
- (void)beginBlockingDeauthentication;
- (char)biometricsEnabledForAccount:(id)a0;
- (id)cachedMainKeyForIdentifier:(id)a0;
- (id)cachedMainKeyForKeyObject:(id)a0 decryptingObject:(id)a1;
- (id)cachedMainKeyForObject:(id)a0;
- (char)checkSupportsBiometrics;
- (void)deauthenticateAllObjects;
- (void)deauthenticateWithDevicePassword;
- (void)endBlockingDeauthentication;
- (void)extendDeauthenticationTimer;
- (id)faceIDEnabledKeyForAccountIdentifier:(id)a0;
- (void)localAuthenticationDidChangeBiometricsPolicyState:(id)a0;
- (id)mainKeyFromKeychainForObject:(id)a0;
- (id)mainKeyFromKeychainForObject:(id)a0 cipherVersion:(long long)a1;
- (id)mainKeyIdentifierForKeyObject:(id)a0 cipherVersion:(long long)a1;
- (char)removeAllMainKeysFromKeychain;
- (char)removeMainKeyFromKeychainForObject:(id)a0;
- (char)removeMainKeysFromKeychainForAccount:(id)a0;
- (void)setBiometricsEnabled:(char)a0 forAccount:(id)a1;
- (char)setCachedMainKey:(id)a0 forObject:(id)a1;
- (id)touchIDEnabledKeyForAccountIdentifier:(id)a0;

@end
