@class NSString;

@interface SFAutoFillFeatureManager : NSObject

@property (class, readonly) SFAutoFillFeatureManager *sharedFeatureManager;
@property (class, readonly) struct __CFString { } *autoFillPreferencesDomain;
@property (class, readonly) BOOL defaultValueForPasswordAndCreditCardAutoFill;

@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (retain, nonatomic) NSString *preferredCredentialProviderForSaving;

+ (void)autoFillPreferencesDidChange;

- (id)init;
- (void)_refreshCachedAutoFillRestrictionValues;

@end
