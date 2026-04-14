@class PHAJobConstraints, NSMutableSet, PHAWorker;

@interface PHAWorkerWarmer : NSObject

@property (class, readonly) unsigned long long stateCode;

@property (readonly, nonatomic) NSMutableSet *workers;
@property (retain, nonatomic) PHAWorker *lastActiveWorker;
@property (retain, nonatomic) PHAJobConstraints *lastConstraints;

- (id)init;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (void)_warmupWorkerIfCooled:(id)a0 withProgressBlock:(id /* block */)a1;
- (BOOL)_cooldownWorkerIfWarmed:(id)a0;
- (void)recordConstraintChange:(id)a0;
- (void)setActiveWorker:(id)a0 withJob:(id)a1;
- (void)reportNoMoreJobsExpected;

@end
