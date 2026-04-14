@protocol BKSecurePreferencesDelegate;

@interface BKSecurePreferences : NSObject

@property (weak, nonatomic) id<BKSecurePreferencesDelegate> delegate;
@property (readonly, nonatomic) BOOL explicitContentRestricted;
@property (readonly, nonatomic) BOOL bookstoreDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_parentalPreferenceIsForcedForKey:(id)a0;
- (void)_systemProfilePreferencesDidChange:(id)a0;

@end
