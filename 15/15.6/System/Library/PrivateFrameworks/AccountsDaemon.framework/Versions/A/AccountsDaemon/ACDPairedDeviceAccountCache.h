@class NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACDPairedDeviceAccountCache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    char _accountsIsValid;
    NSArray *_accounts;
    NSMutableArray *_completions;
}

@property (class, readonly) ACDPairedDeviceAccountCache *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_didFetchAccounts:(id)a0 error:(id)a1;
- (void)accountsFromRemoteDeviceProxy:(id)a0 ignoreCache:(char)a1 options:(id)a2 completion:(id /* block */)a3;

@end
