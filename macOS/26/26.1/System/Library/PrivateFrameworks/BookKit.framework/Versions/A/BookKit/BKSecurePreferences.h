@protocol BKSecurePreferencesDelegate;

@interface BKSecurePreferences : NSObject

@property (weak, nonatomic) id<BKSecurePreferencesDelegate> delegate;
@property (readonly, nonatomic) BOOL explicitContentRestricted;
@property (readonly, nonatomic) BOOL bookstoreDisabled;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_parentalPreferenceIsForcedForKey:(id)a0;
- (void)_systemProfilePreferencesDidChange:(id)a0;

@end
