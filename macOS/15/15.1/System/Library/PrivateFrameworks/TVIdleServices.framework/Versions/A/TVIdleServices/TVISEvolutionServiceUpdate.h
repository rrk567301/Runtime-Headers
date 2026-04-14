@class NSProgress, NSMutableArray, NSObject;
@protocol OS_os_transaction;

@interface TVISEvolutionServiceUpdate : TVISProgressTracking

@property (readonly, nonatomic) NSProgress *beginExecutionProgress;
@property (readonly, nonatomic) NSProgress *endExecutionProgress;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, copy, nonatomic) NSMutableArray *barrierTasks;
@property (readonly, nonatomic) unsigned long long context;

+ (id)_lock;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContext:(unsigned long long)a0;
- (void)cancel;
- (void)addTraits:(unsigned long long)a0;
- (void)addBarrierTask:(id /* block */)a0;
- (void)beginExecutionWithCompletion:(id /* block */)a0;
- (void)endExecution;

@end
