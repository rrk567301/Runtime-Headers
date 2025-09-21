@class NSArray, PLBackgroundJobCriteria;

@interface PLBackgroundJobWorkerPendingWorkItems : NSObject

@property (nonatomic) BOOL zeroWorkItemsForValidCriteria;
@property (readonly, copy, nonatomic) NSArray *workItemsNeedingProcessing;
@property (readonly, copy, nonatomic) PLBackgroundJobCriteria *criteria;

- (id)initWithZeroWorkItems;
- (id)initWithCriteria:(id)a0 workItemsNeedingProcessing:(id)a1;
- (id)initWithZeroWorkItemsForValidCriteria;
- (void).cxx_destruct;

@end
