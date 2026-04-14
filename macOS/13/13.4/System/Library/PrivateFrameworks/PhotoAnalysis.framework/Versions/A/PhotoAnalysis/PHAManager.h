@class PGManager, NSURL, NSString, NSMutableDictionary, PHPhotoLibrary, PHAMonitoring, PHAExecutive, PHAJobCoordinator, CPAnalytics;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    PHAMonitoring *_monitoring;
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

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (id)monitoring;
- (BOOL)isReadyForAnalysis;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)reportTurboEnabledWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestEnergyStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (BOOL)turboIsEnabled;
- (void)handleOperation:(id)a0;
- (void)enableTurboMode;
- (void)backgroundActivityDidBegin;
- (id)backloggedStatus;
- (void)checkForQuiescence;
- (id)clientDispatcher;
- (void)disableTurboMode;
- (void)enumerateWorkersUsingBlock:(id /* block */)a0;
- (id)initWithPhotoLibraryURL:(id)a0 executive:(id)a1;
- (BOOL)isBacklogged;
- (BOOL)photosIsConnected;
- (void)startTurboProcessing;
- (id)statusAsDictionary;
- (void)stopAllBackgroundActivities;
- (void)stopBackgroundActivity;
- (void)stopBackgroundActivityWaitForCompletion;
- (id)storytellingWorker;
- (void)triggerBackgroundActivity;
- (void)turboConstraintsWereRemoved;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;

@end
