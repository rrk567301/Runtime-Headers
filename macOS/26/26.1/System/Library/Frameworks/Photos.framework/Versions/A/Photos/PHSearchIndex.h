@class NSTimer, PLSearchIndexSceneTaxonomyProvider, PHPhotoLibrary, PLSearchSpotlightSandboxExtension, PSIDatabase;

@interface PHSearchIndex : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queryLock;
    PLSearchSpotlightSandboxExtension *_spotlightSandboxExtension;
}

@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (retain, nonatomic) PSIDatabase *unverifiedPsiSearchIndex;
@property (nonatomic) BOOL isCheckingIfTheSearchIndexIsReady;
@property (retain, nonatomic) PSIDatabase *_psiSearchIndex;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PSIDatabase *psiSearchIndex;

+ (BOOL)_ensureSearchIndexIsReadyToBeQueriedForPhotoLibrary:(id)a0;

- (void)dealloc;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_openQueryConnectionToSearchIndexForPhotoLibrary:(id)a0 completion:(id /* block */)a1;
- (void)_spotlightIndexStateForLibraryWithCompletionHandler:(id /* block */)a0;
- (void)acquireSpotlightSandboxExtensionIfNeeded;
- (void)preWarmSearchIndexSynchronously:(BOOL)a0 completion:(id /* block */)a1;
- (void)startIndexingAndMonitoringSearchIndexStatus;
- (void)stopIndexingAndMonitoringSearchIndexStatus;
- (void)validateSpotlightIndexForLibraryExistsWithCompletionHandler:(id /* block */)a0;

@end
