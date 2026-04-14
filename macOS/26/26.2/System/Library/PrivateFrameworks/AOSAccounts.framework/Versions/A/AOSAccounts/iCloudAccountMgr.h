@class NSArray, NSOperationQueue;

@interface iCloudAccountMgr : NSObject

@property (retain) NSArray *accountCache;
@property (retain) NSOperationQueue *operationQueue;
@property long long queuedRefreshCount;

+ (id)sharedMgr;

- (void).cxx_destruct;
- (id)init;
- (void)_reloadAccounts:(id)a0;
- (void)forceReloadAccounts;
- (id)icaAppleAccountWithPersonID:(id)a0;
- (id)icaAppleAccountWithUsername:(id)a0;
- (id)icaPrimaryAppleAccount;

@end
