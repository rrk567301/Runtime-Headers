@class ACAccount;

@interface ICQCloudStorageDataController : NSObject {
    ACAccount *_account;
}

@property (nonatomic) BOOL shouldIgnoreCache;

+ (id)_requestQueue;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)a0;
- (id)cachedStorageSummary;
- (void)fetchStorageByApp:(id)a0 completion:(id /* block */)a1;
- (void)fetchBackupinfoWithCompletion:(id /* block */)a0;
- (void)sendDisplayStatusForTip:(id)a0 completion:(id /* block */)a1;
- (void)sendDismissStatusForTip:(id)a0 completion:(id /* block */)a1;

@end
