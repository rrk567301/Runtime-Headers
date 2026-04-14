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

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setCachedAccounts;
- (BOOL)hasCalendarAccount:(id)a0;
- (id)serverIdentifierForAccount:(id)a0;
- (void)refreshCacheFromAccountsService;
- (void)cancelUpdateTimer;
- (void)dealloc;
- (void)removeNotificationObserver;
- (void).cxx_destruct;
- (BOOL)readCachedAccounts;
- (void)accountsStoreDidChange:(id)a0;
- (void)registerNotificationObserver;
- (id)primaryICloudCalendarAccount;
- (void)setUpdateTimerWithDelaySeconds:(unsigned long long)a0;
- (id)init;

@end
