@class NSString, MAProgressReporter, PGGraphUpdateManager, NSObject;
@protocol OS_dispatch_semaphore;

@interface PHAGraphConsistencyTask : NSObject <PHATask, PGGraphUpdateListener> {
    PGGraphUpdateManager *_updateManager;
    MAProgressReporter *_progressReporter;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (void)graphUpdateMadeProgress:(double)a0;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (void)markTaskAsCompleted;

@end
