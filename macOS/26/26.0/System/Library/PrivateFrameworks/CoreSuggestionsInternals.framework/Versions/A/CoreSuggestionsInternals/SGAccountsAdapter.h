@class NSSet, NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGAccountsAdapter : NSObject {
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSString *_cachedPrimaryICloudAccount;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_source> *_updateSource;
    BOOL _updateTimerIsSet;
    NSObject<OS_dispatch_queue> *_updateTimerQueue;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (void)registerNotificationObserver;
- (void)setUpdateTimerWithDelaySeconds:(unsigned long long)a0;
- (id)init;
- (void)setCachedAccounts;
- (BOOL)readCachedAccounts;
- (id)serverIdentifierForAccount:(id)a0;
- (void)accountsStoreDidChange:(id)a0;
- (void)refreshCacheFromAccountsService;
- (void)removeNotificationObserver;
- (BOOL)hasCalendarAccount:(id)a0;
- (id)primaryICloudCalendarAccount;
- (void)cancelUpdateTimer;
- (void).cxx_destruct;

@end
