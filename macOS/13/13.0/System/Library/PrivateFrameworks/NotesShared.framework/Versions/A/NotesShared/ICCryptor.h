@interface ICCryptor : NSObject

@property (class, nonatomic, getter=isAuthenticatedWithDevicePassword) BOOL authenticatedWithDevicePassword;

+ (id)dataFromHexString:(id)a0;
+ (void)cachedKeyClearingTimerDidFire;
+ (id)wrapKey:(id)a0 withMainKey:(id)a1;
+ (id)decryptWithMainKeyOfObject:(id)a0 decryptable:(id)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (id)decryptWithMainKeyOfObject:(id)a0 decryptablePreparationBlock:(id /* block */)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataToEncrypt:(id)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataPreparationBlock:(id /* block */)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;
+ (void)authenticateNotesWithPassphrase:(id)a0 inAccount:(id)a1;
+ (BOOL)authenticateWithPassphrase:(id)a0 forObject:(id)a1;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphraseIfNecessary:(id)a0;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphrase:(id)a0;
+ (BOOL)unauthenticatedAttachmentsUsingSamePassphraseExistForNote:(id)a0 passphrase:(id)a1;
+ (void)cacheMainKeyWithPassphrase:(id)a0 forObject:(id)a1;
+ (id)mainKeysByAccountIdentifier;
+ (void)setCachedMainKey:(id)a0 forIdentifier:(id)a1 bioAuthAccountID:(id)a2;
+ (void)insertMainKeyFromPassphrase:(id)a0 intoKeychainForAccount:(id)a1;
+ (void)setCachedMainKey:(id)a0 forObject:(id)a1;
+ (id)cachedMainKeyForIdentifier:(id)a0;
+ (id)allCachedKeys;
+ (id)cachedMainKeyForObject:(id)a0;
+ (void)clearAllCachedMainKeys;
+ (void)refaultAllPasswordProtectedObjects;
+ (BOOL)hasAnyCachedMainKeys;
+ (BOOL)setPassphrase:(id)a0 hint:(id)a1 oldPassphrase:(id)a2 forAccount:(id)a3;
+ (double)timeIntervalBeforeClearingCachedKeys;
+ (void)startOrExtendCachedKeyClearingTimer;
+ (void)startOrExtendCachedKeyClearingTimerForModes:(id)a0;

@end
