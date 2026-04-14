@class DRConfig, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DRConfigMonitor : NSObject

@property (retain, nonatomic) DRConfig *currentConfig;
@property (readonly, nonatomic) id /* block */ processingBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSString *teamID;

- (void)stopMonitoring;
- (BOOL)rejectConfigUUID:(id)a0 errorOut:(id *)a1;
- (void)startMonitoring;
- (id)currentConfigSnapshotWithErrorOut:(id *)a0;
- (void).cxx_destruct;
- (void)_notifyClientOfConfig:(id)a0 error:(id)a1;
- (void)dealloc;
- (BOOL)markCompletedConfigUUID:(id)a0 errorOut:(id *)a1;
- (void)_handleCurrentConfig:(id)a0 error:(id)a1 forceBroadcast:(BOOL)a2;
- (id)initWithTeamID:(id)a0 targetQueue:(id)a1 configProcessingBlock:(id /* block */)a2;
- (BOOL)_markConfigUUID:(id)a0 isRejected:(BOOL)a1 errorOut:(id *)a2;

@end
