@class NSString, AMSMediaToken;
@protocol AMSMediaTokenServiceKeychainStoreProtocol;

@interface AMSMediaTokenServiceStore : NSObject <AMSMediaTokenServiceStoreProtocol>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessLock;
@property (retain, nonatomic) AMSMediaToken *memoryMediaToken;
@property (readonly, nonatomic) id<AMSMediaTokenServiceKeychainStoreProtocol> keychainStore;
@property (nonatomic) BOOL patBasedToken;
@property (readonly, nonatomic) NSString *notificationObject;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) BOOL usingAccessControlIdentifier;
@property (copy, nonatomic) NSString *keychainAccessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hasAppleGroupEnabled;

- (id)initWithClientIdentifier:(id)a0 keychainStore:(id)a1 patBasedToken:(BOOL)a2;
- (void)_mediaTokenChanged:(id)a0;
- (void)dealloc;
- (id)retrieveToken;
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 usingAccessControlIdentifier:(BOOL)a2 patBasedToken:(BOOL)a3;
- (id)_mediaTokenFromUserDefaults;
- (void)_teardownKeychainNotifications;
- (id)_mediaTokenChangedNotificationName;
- (void)_setupKeychainNotifications;
- (void)storeToken:(id)a0;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 patBasedToken:(BOOL)a2;
- (id)_keychainAccessGroup;
- (void).cxx_destruct;
- (void)deleteToken;

@end
