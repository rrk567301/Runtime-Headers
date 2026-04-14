@class AMSMediaTokenServiceKeychainStore, AMSMediaToken, NSString, AMSMediaTokenServiceUserDefaultsStore;

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessLock;
@property (retain) AMSMediaToken *memoryMediaToken;
@property (retain) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (retain) AMSMediaTokenServiceUserDefaultsStore *userDefaultsStore;
@property (readonly) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *keychainAccessGroup;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_keychainAccessGroup;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1;
- (id)retrieveToken;
- (void)storeToken:(id)a0;
- (void)_mediaTokenChanged;
- (BOOL)_hasAppleGroupEnabled;
- (id)_mediaTokenChangedNotificationName;
- (void)_postMediaTokenChangedNotification;
- (void)_setupKeychainNotifications;
- (void)_teardownKeychainNotifications;

@end
