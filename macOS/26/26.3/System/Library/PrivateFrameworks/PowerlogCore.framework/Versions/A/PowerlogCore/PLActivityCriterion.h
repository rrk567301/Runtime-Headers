@protocol PLActivityCriterionDelegate;

@interface PLActivityCriterion : NSObject

@property (nonatomic) BOOL satisfied;
@property (weak) id<PLActivityCriterionDelegate> delegate;

- (void)didEnableActivity:(id)a0;
- (id)init;
- (void)didDisableActivity:(id)a0;
- (void)didCompleteActivity:(id)a0;
- (void).cxx_destruct;
- (void)didInterruptActivity:(id)a0;

@end
