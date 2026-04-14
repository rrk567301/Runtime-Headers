@class NSMutableArray, NSString, PGProgressCallChecker, MARootProgressReporter, PHPhotoLibrary, PGManager, NSObject;
@protocol PHAStorytellingOnDemandTaskHandlerDelegate, OS_os_log, PHAJobTimeHandlerProtocol, OS_dispatch_queue;

@interface PHAStorytellingOnDemandTaskHandler : NSObject <PHAServiceOperationHandling> {
    PGManager *_graphManager;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableArray *_operationsToRun;
    PGProgressCallChecker *_progressCallChecker;
    BOOL _isShutdown;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (retain) MARootProgressReporter *onDemandTaskProgressReporter;
@property (readonly, nonatomic) BOOL isQuiescent;
@property (weak, nonatomic) id<PHAStorytellingOnDemandTaskHandlerDelegate> delegate;
@property (readonly, weak, nonatomic) id<PHAJobTimeHandlerProtocol> jobTimeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (void)requestSyndicationProcessingWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestExternalAssetRelevanceProcessingWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)_runCachingCPAnalyticsTestWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)forceCancellationIfShutdown;
- (void)requestRevGeocodingSyndicationLibraryWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)generateMemoriesWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)runPerformanceTest:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 options:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)_runEnrichmentTestWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)cancelCurrentOperation;
- (BOOL)hasRemainingOperations;
- (void)requestAssetRevGeocodingWithContext:(id)a0 reply:(id /* block */)a1;
- (id)nextOperation;
- (void)requestHighlightEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSuggestedPersonsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGenerateQuestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)reportMetricsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)initWithGraphManager:(id)a0 jobTimeHandler:(id)a1;
- (void)cacheCPAnalyticsPropertiesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)dequeueOperationsIfNeeded;
- (void)handleOperation:(id)a0;
- (void)generateSuggestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)requestOnDemandTasksWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;

@end
