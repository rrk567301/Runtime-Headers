@class AMSMediaTokenServiceKeychainStore, AMSMediaToken, NSString, NSObject, AMSMediaTokenServiceUserDefaultsStore;
@protocol OS_dispatch_queue;

@interface AMSMediaTokenServiceStore : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *accessQueue;
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
- (void)_setupKeychainNotifications;
- (void)_teardownKeychainNotifications;
- (void)_postMediaTokenChangedNotification;
- (BOOL)_hasAppleGroupEnabled;
- (id)_mediaTokenChangedNotificationName;
- (void)_mediaTokenChanged;

@end
