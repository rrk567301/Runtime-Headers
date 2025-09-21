@class CPLEngineLibrary, CPLSyncSession, CPLEngineStore, NSString, NSError, CPLEngineSyncManager;

@interface CPLSyncStep : NSObject <CPLEngineSyncTaskDelegate>

@property (readonly, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly, nonatomic) CPLEngineStore *engineStore;
@property (readonly, nonatomic) CPLEngineSyncManager *syncManager;
@property (readonly, nonatomic) CPLSyncSession *syncSession;
@property (readonly, nonatomic) NSString *descriptionForTasks;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly) char hasTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)cancelAllTasks:(char)a0;
- (char)containsTask:(id)a0;
- (char)didFinishTask:(id)a0 withError:(id)a1 shouldStop:(char *)a2;
- (id)initWithSyncManager:(id)a0 syncSession:(id)a1;
- (char)launchNecessaryTasks;
- (void)moveTasksToBackground;
- (char)prepareAndLaunchSyncTask:(id *)a0;
- (float)progressForTask:(id)a0 progress:(float)a1;
- (void)setErrorForSyncSession:(id)a0;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;

@end
