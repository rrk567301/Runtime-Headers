@protocol PLActivityCriterionDelegate;

@interface PLActivityCriterion : NSObject

@property (nonatomic) BOOL satisfied;
@property (weak) id<PLActivityCriterionDelegate> delegate;

- (void)didInterruptActivity:(id)a0;
- (void)didCompleteActivity:(id)a0;
- (void).cxx_destruct;
- (void)didDisableActivity:(id)a0;
- (void)didEnableActivity:(id)a0;
- (id)init;

@end
