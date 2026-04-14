@class NSMutableArray, NSDate;

@interface PKPayLaterFinancingPlansFetcherRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly, nonatomic) NSDate *startDate;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 completion:(id /* block */)a1;
- (BOOL)coalesceRequest:(id)a0;
- (void)callCompletionsWithResult:(id)a0;

@end
