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
- (id)clientDispatcher;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;
- (void)checkForQuiescence;
- (id)faceProcessingServiceWorker;
- (id)storytellingWorker;
- (id)faceClassificationServiceWorker;
- (void)turboConstraintsWereRemoved;
- (void)triggerBackgroundActivity;
- (void)stopAllBackgroundActivities;
- (void)stopBackgroundActivity;
- (void)disableTurboMode;
- (void)enableTurboMode;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (void)backgroundActivityDidBegin;
- (void)startTurboProcessing;
- (BOOL)photosIsConnected;
- (void)stopBackgroundActivityWaitForCompletion;

@end
