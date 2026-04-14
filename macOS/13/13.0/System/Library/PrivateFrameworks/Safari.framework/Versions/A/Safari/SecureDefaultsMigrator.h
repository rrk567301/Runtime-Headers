@class NSArray;

@interface SecureDefaultsMigrator : NSObject {
    id _keyBagObserverToken;
    NSArray *_preferenceKeysToMigrate;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPreferenceKeysToMigrate:(id)a0;
- (long long)migrateSecureDefaultsToUserDefaultsIfNecessary;
- (void)_tryMigrationAgainIfKeyBagIsUnlocked;
- (void)_unregisterKeyBagObserverIfPossible;
- (void)_didUnlockKeyBag;
- (id)keyBagLockStatusManager;
- (id)safariSecureDefaults;

@end
