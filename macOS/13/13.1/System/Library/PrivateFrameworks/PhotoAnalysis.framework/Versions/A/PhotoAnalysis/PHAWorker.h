@class PHAServiceCancelableOperation, NSString, NSURL, PHPhotoLibrary, NSObject, PHAManager;
@protocol OS_os_log, OS_dispatch_queue;

@interface PHAWorker : NSObject <PHAWorkerConfiguration, PHAServiceOperationHandling, PHAJobTimeHandlerProtocol> {
    PHAManager *_photoAnalysisManager;
    NSObject<OS_dispatch_queue> *_userInitiatedRequestQueue;
    BOOL _shutdownHasBeenCalled;
}

@property (nonatomic, getter=isWarmedUp) BOOL warmedUp;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PHAManager *photoAnalysisManager;
@property (readonly) NSURL *persistentStorageDirectoryURL;
@property (readonly) BOOL isEnabled;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (retain) PHAServiceCancelableOperation *currentOperation;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;
+ (BOOL)persistsState;
+ (id)persistentStorageDirectoryURLForPhotoLibrary:(id)a0;
+ (BOOL)runsExclusively;
+ (void)configureXPCConnection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (void)startup;
- (void)handleOperation:(id)a0;
- (void)cooldown;
- (void)warmupWithProgressBlock:(id /* block */)a0;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (id)nextAdditionalJobWithScenario:(unsigned long long)a0 requestReason:(unsigned long long)a1;
- (id)statusAsDictionary;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (id)initWithPhotoAnalysisManager:(id)a0;
- (id)libraryScopedWorkerPreferences;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)a0 keysToRemove:(id)a1;
- (void)setLibraryScopedWorkerPreferencesValue:(id)a0 forKey:(id)a1;
- (void)setLastCompletedDate:(id)a0 andVersion:(unsigned long long)a1 forTaskName:(id)a2;
- (BOOL)didExceedTimeInterval:(double)a0 forKey:(id)a1;
- (BOOL)completedJobTodayForKey:(id)a0;
- (unsigned long long)versionForTaskName:(id)a0;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (void)dispatchSyncToUserInitiatedRequestQueue:(id /* block */)a0;
- (void)assertUserInitiatedRequestQueue;
- (id)libraryScopedWorkerPreferencesURL;
- (BOOL)canRunWhenGraphIsLoaded;
- (void)pingWorkerWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;

@end
