@class ICQiCloudDetailsPageInfo, ACAccount;

@interface ICQCloudStorageDataController : NSObject {
    ACAccount *_account;
}

@property (nonatomic) BOOL shouldIgnoreCache;
@property (readonly, nonatomic) ICQiCloudDetailsPageInfo *cachediCloudDetailsPage;
@property (nonatomic) BOOL iCloudDetailsPageShown;

+ (id)_requestQueue;

- (void)fetchStorageAppsWithCompletion:(id /* block */)a0;
- (id)initWithAccount:(id)a0;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)a0;
- (void)fetchBackupinfoWithCompletion:(id /* block */)a0;
- (void)fetchAppsSyncingToiCloudDriveWithCompletion:(id /* block */)a0;
- (void)fetchStorageByApp:(id)a0 completion:(id /* block */)a1;
- (id)cachedStorageSummary;
- (void).cxx_destruct;
- (void)sendTipState:(long long)a0 forTip:(id)a1 completion:(id /* block */)a2;

@end
