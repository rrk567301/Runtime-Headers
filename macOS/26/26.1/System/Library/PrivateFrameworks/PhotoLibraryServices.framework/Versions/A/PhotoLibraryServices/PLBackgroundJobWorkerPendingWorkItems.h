@class NSArray, PLBackgroundJobCriteria, NSDate;

@interface PLBackgroundJobWorkerPendingWorkItems : NSObject

@property (nonatomic) BOOL zeroWorkItemsForValidCriteria;
@property (copy, nonatomic) NSDate *signalAgainDate;
@property (readonly, copy, nonatomic) NSArray *workItemsNeedingProcessing;
@property (readonly, copy, nonatomic) PLBackgroundJobCriteria *criteria;

- (id)initWithZeroWorkItemsForValidCriteria;
- (id)initWithSignalAgainDate:(id)a0;
- (id)initWithZeroWorkItems;
- (void).cxx_destruct;
- (id)initWithCriteria:(id)a0 workItemsNeedingProcessing:(id)a1;

@end
