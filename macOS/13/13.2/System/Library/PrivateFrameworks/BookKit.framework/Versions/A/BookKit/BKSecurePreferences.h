@protocol BKSecurePreferencesDelegate;

@interface BKSecurePreferences : NSObject

@property (weak, nonatomic) id<BKSecurePreferencesDelegate> delegate;
@property (readonly, nonatomic) BOOL explicitContentRestricted;
@property (readonly, nonatomic) BOOL bookstoreDisabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_systemProfilePreferencesDidChange:(id)a0;
- (BOOL)_parentalPreferenceIsForcedForKey:(id)a0;

@end
