@class NSArray, NSOperationQueue;

@interface iCloudAccountMgr : NSObject

@property (retain) NSArray *accountCache;
@property (retain) NSOperationQueue *operationQueue;
@property long long queuedRefreshCount;

+ (id)sharedMgr;

- (id)init;
- (void).cxx_destruct;
- (id)icaAppleAccountWithPersonID:(id)a0;
- (void)_reloadAccounts:(id)a0;
- (void)forceReloadAccounts;
- (id)icaPrimaryAppleAccount;
- (id)icaAppleAccountWithUsername:(id)a0;

@end
