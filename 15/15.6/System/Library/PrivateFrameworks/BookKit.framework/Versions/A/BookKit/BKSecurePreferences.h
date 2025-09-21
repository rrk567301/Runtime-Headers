@protocol BKSecurePreferencesDelegate;

@interface BKSecurePreferences : NSObject

@property (weak, nonatomic) id<BKSecurePreferencesDelegate> delegate;
@property (readonly, nonatomic) char explicitContentRestricted;
@property (readonly, nonatomic) char bookstoreDisabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)_parentalPreferenceIsForcedForKey:(id)a0;
- (void)_systemProfilePreferencesDidChange:(id)a0;

@end
