@class CPLSyncSession, NSString, CPLEngineLibrary, NSArray, NSDate, CPLSyncThroughputReporter;
@protocol CPLEngineStoreUserIdentifier, CPLEngineSyncTaskDelegate;

@interface CPLEngineSyncTask : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _phaseDescriptionLock;
    NSDate *_lastChangeDateForPhaseDescription;
    BOOL _hasFinishedTask;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _throughputReporterLock;
    CPLSyncThroughputReporter *_throughputReporter;
}

@property (getter=isCancelled, setter=_setCancelled:) BOOL cancelled;
@property (retain) id<CPLEngineSyncTaskDelegate> delegate;
@property (readonly, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly, nonatomic) CPLSyncSession *session;
@property (retain, nonatomic) id<CPLEngineStoreUserIdentifier> transportUserIdentifier;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL forceSync;
@property (readonly, nonatomic) NSString *taskIdentifier;
@property (copy) NSString *phaseDescription;
@property (readonly, nonatomic) NSArray *scopesForTask;

+ (id)taskWithEngineLibrary:(id)a0 session:(id)a1;

- (void)cancel;
- (unsigned long long)diskPressureState;
- (id)description;
- (void)launch;
- (void).cxx_destruct;
- (id)phaseDescriptionLastChangeDate:(id *)a0;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1;
- (void)launchTransportTask:(id)a0 withTransportGroup:(id)a1;
- (void)setThroughputReporter:(id)a0;
- (void)taskDidFinishWithError:(id)a0;
- (void)taskDidProgress:(float)a0 userInfo:(id)a1;
- (void)withThroughputReporter:(id /* block */)a0;

@end
