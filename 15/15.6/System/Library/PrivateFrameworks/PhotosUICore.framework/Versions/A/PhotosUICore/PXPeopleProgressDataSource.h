@class PHFetchResult, NSString, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver>

@property (nonatomic) char isReadyForAnalysis;
@property (nonatomic) long long allowedAssetCount;
@property (nonatomic) long long processedToLatestVersionAssetCount;
@property (nonatomic) long long processedToAnyVersionAssetCount;
@property (nonatomic) long long pendingToLatestVersionAssetCount;
@property (nonatomic) long long pendingToAnyVersionAssetCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *scanningProgressQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *personPromoterQueue;
@property (retain, nonatomic) PHFetchResult *homeResult;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressLock;
@property (nonatomic) char countCacheValid;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) char hasHomePeople;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { long long x0; long long x1; long long x2; double x3; double x4; })_invalidProgressReport;
+ (long long)pendingCountForAllowedCount:(long long)a0 processedCount:(long long)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_fetchPeople;
- (void)_logFaceCounts;
- (void)appWillEnterForeground;
- (void)asyncUpdateProgressWithReportBlock:(id /* block */)a0;
- (char)isPhotoLibraryReadyForAnalysis;
- (void)loadQueryData;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (struct { long long x0; long long x1; long long x2; double x3; double x4; })progressReportForLibrary:(id)a0;
- (void)requestPersonPromoterStatusWithCompletionBlock:(id /* block */)a0;
- (void)syncUpdateProgressWithReportBlock:(id /* block */)a0;
- (void)updateProgressFromIsReadyForAnalysis:(char)a0 progressReport:(struct { long long x0; long long x1; long long x2; double x3; double x4; })a1;
- (void)updateProgressIfNeededWithReportBlock:(id /* block */)a0;

@end
