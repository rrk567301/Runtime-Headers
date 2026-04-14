@class _TtC8Contacts21CNContactProviderHost, CNUnfairLock, CNCache, NSObject;
@protocol OS_os_log;

@interface CNContactProviderModerator : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) _TtC8Contacts21CNContactProviderHost *host;
@property (readonly, nonatomic) CNCache *cache;
@property (readonly, nonatomic) CNUnfairLock *lock;

+ (id)synchronizeAllUsingSession:(id)a0;

- (void).cxx_destruct;
- (void)evictPromiseForBundleIdentifier:(id)a0;
- (id)initWithHost:(id)a0;
- (id)synchronizeUsingSession:(id)a0 bundleIdentifier:(id)a1;

@end
