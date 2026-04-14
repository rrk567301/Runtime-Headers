@class NSNumber;

@interface SFAutoFillFeatureManager : NSObject {
    BOOL _shouldOverrideShouldAutoFillFromKeychain;
    BOOL _overrideShouldAutoFillFromKeychainValue;
    NSNumber *_overrideUserIsEligibleForPasskeys;
    BOOL _cachedIsPasswordsAppInstalled;
}

@property (class, readonly) SFAutoFillFeatureManager *sharedFeatureManager;
@property (class, readonly) struct __CFString { } *autoFillPreferencesDomain;
@property (class, readonly) BOOL defaultValueForPasswordAndCreditCardAutoFill;

@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (readonly, nonatomic) BOOL isUserAllowedToTogglePasswordAutoFillEnabledState;
@property (readonly, nonatomic) BOOL isAutoFillFromKeychainRestricted;
@property (readonly, nonatomic) BOOL userIsEligibleForPasskeys;
@property (readonly, nonatomic) BOOL userIsEligibleForPasskeysWithICloudKeychain;

+ (void)autoFillPreferencesDidChange;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_refreshCachedAutoFillRestrictionValues;
- (void)_refreshCachedIsPasswordsAppInstalled;
- (void)test_overrideShouldAutoFillFromKeychain:(BOOL)a0;
- (void)test_overrideUserIsEligibleForPasskeys:(BOOL)a0;

@end
