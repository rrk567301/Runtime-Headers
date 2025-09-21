@interface SFAutoFillFeatureManager : NSObject {
    char _shouldOverrideShouldAutoFillFromKeychain;
    char _overrideShouldAutoFillFromKeychainValue;
}

@property (class, readonly) SFAutoFillFeatureManager *sharedFeatureManager;
@property (class, readonly) struct __CFString { } *autoFillPreferencesDomain;
@property (class, readonly) char defaultValueForPasswordAndCreditCardAutoFill;

@property (nonatomic) char shouldAutoFillPasswordsFromKeychain;
@property (nonatomic) char shouldAutoFillPasswords;
@property (readonly, nonatomic) char isUserAllowedToTogglePasswordAutoFillEnabledState;
@property (readonly, nonatomic) char isAutoFillFromKeychainRestricted;

+ (void)autoFillPreferencesDidChange;

- (void)dealloc;
- (id)init;
- (void)_refreshCachedAutoFillRestrictionValues;
- (void)test_overrideShouldAutoFillFromKeychain:(char)a0;

@end
