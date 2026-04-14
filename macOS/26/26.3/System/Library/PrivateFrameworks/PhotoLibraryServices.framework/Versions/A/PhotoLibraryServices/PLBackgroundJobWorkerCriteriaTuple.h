@class PLBackgroundJobCriteria, PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerCriteriaTuple : NSObject

@property (readonly, nonatomic) PLBackgroundJobWorker *worker;
@property (readonly, nonatomic) PLBackgroundJobCriteria *criteria;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithWorker:(id)a0 withCriteria:(id)a1;

@end
