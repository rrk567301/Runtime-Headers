@class _TtC11iCloudQuota26RecommendationsDataFetcher, ICQiCloudDetailsPageInfo, ACAccount;

@interface ICQCloudStorageDataController : NSObject {
    ACAccount *_account;
    _TtC11iCloudQuota26RecommendationsDataFetcher *_recommendationsDataFetcher;
}

@property (nonatomic) BOOL shouldIgnoreCache;
@property (readonly, nonatomic) ICQiCloudDetailsPageInfo *cachediCloudDetailsPage;
@property (nonatomic) BOOL iCloudDetailsPageShown;

+ (id)_requestQueue;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)fetchStorageAppsWithCompletion:(id /* block */)a0;
- (id)cachedStorageSummary;
- (void)fetchAppsSyncingToiCloudDriveWithCompletion:(id /* block */)a0;
- (void)fetchBackupinfoWithCompletion:(id /* block */)a0;
- (void)fetchStorageByApp:(id)a0 completion:(id /* block */)a1;
- (void)fetchStorageSummaryWithCompletion:(id /* block */)a0;
- (void)sendDismissStatusForTip:(id)a0 completion:(id /* block */)a1;
- (void)sendDisplayStatusForTip:(id)a0 completion:(id /* block */)a1;

@end
