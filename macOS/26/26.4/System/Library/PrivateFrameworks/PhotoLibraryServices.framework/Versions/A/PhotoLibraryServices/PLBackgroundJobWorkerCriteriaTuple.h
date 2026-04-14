@class PLBackgroundJobCriteria, PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerCriteriaTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobWorker *worker;
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria;

- (void).cxx_destruct;
- (id)description;
- (id)initWithWorker:(id)a0 withCriteria:(id)a1;

@end
