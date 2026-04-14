@class NSArray, PLBackgroundJobCriteria, NSDate;

@interface PLBackgroundJobWorkerPendingWorkItems : NSObject

@property (nonatomic) BOOL zeroWorkItemsForValidCriteria;
@property (copy, nonatomic) NSDate *signalAgainDate;
@property (readonly, copy, nonatomic) NSArray *workItemsNeedingProcessing;
@property (readonly, copy, nonatomic) PLBackgroundJobCriteria *criteria;

- (id)initWithSignalAgainDate:(id)a0;
- (id)initWithCriteria:(id)a0 workItemsNeedingProcessing:(id)a1;
- (void).cxx_destruct;
- (id)initWithZeroWorkItemsForValidCriteria;
- (id)initWithZeroWorkItems;
- (id)initWithUnitWorkItemForCriteria:(id)a0;

@end
