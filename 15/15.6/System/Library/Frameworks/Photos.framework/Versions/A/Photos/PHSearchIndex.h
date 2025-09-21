@class NSTimer, PLSearchIndexSceneTaxonomyProvider, PHPhotoLibrary, PSIDatabase;

@interface PHSearchIndex : NSObject

@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (retain, nonatomic) PSIDatabase *unverifiedPsiSearchIndex;
@property (nonatomic) char isCheckingIfTheSearchIndexIsReady;
@property (retain, nonatomic) PSIDatabase *_psiSearchIndex;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PSIDatabase *psiSearchIndex;

+ (char)_ensureSearchIndexIsReadyToBeQueriedForPhotoLibrary:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_openQueryConnectionToSearchIndexForPhotoLibrary:(id)a0 completion:(id /* block */)a1;
- (void)preWarmSearchIndexSynchronously:(char)a0 completion:(id /* block */)a1;
- (void)startIndexingAndMonitoringSearchIndexStatus;
- (void)stopIndexingAndMonitoringSearchIndexStatus;

@end
