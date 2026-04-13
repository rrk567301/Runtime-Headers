@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobWorker *worker;
@property (readonly, nonatomic) long long priority;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWorker:(id)a0 priority:(long long)a1;

@end
