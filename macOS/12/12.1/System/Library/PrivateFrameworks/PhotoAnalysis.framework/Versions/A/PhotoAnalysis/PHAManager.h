@class PHAAssetResourceDataLoader, PGManager, NSURL, NSString, NSMutableDictionary, PHPhotoLibrary, PHAMonitoring, PHAExecutive, PHAJobCoordinator, CPAnalytics;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAMonitoring *_monitoring;
    PHAAssetResourceDataLoader *_dataLoader;
    unsigned long long _processedAssetCount;
}

@property (retain) NSMutableDictionary *photoAnalysisWorkersByType;
@property (readonly) PHAExecutive *executive;
@property (readonly) NSURL *libraryURL;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGManager *graphManager;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly) CPAnalytics *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)a0;
+ (id)allWorkerClasses;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (id)monitoring;
- (BOOL)isReadyForAnalysis;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)reportTurboEnabledWithContext:(id)a0 reply:(id /* block */)a1;
- (BOOL)turboIsEnabled;
- (void)handleOperation:(id)a0;
- (id)statusAsDictionary;
- (void)triggerBackgroundActivity;
- (void)stopAllBackgroundActivities;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (void)startTurboProcessing;
- (void)enableTurboMode;
- (void)disableTurboMode;
- (void)turboConstraintsWereRemoved;
- (BOOL)photosIsConnected;
- (void)checkForQuiescence;
- (void)stopBackgroundActivity;
- (void)stopBackgroundActivityWaitForCompletion;
- (void)backgroundActivityDidBegin;
- (id)clientDispatcher;
- (id)storytellingWorker;
- (id)faceClassificationServiceWorker;
- (id)faceProcessingServiceWorker;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;

@end
