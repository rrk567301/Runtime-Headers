@interface SFAutoFillFeatureManager : NSObject

@property (class, readonly) SFAutoFillFeatureManager *sharedFeatureManager;
@property (class, readonly) struct __CFString { } *autoFillPreferencesDomain;
@property (class, readonly) BOOL defaultValueForPasswordAndCreditCardAutoFill;

@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (readonly, nonatomic) BOOL isAutoFillFromKeychainRestricted;

+ (void)autoFillPreferencesDidChange;

- (id)init;
- (void)_refreshCachedAutoFillRestrictionValues;

@end
