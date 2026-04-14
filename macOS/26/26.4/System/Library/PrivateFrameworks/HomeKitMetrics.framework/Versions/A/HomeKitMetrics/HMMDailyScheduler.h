@protocol HMMDailySchedulerDelegate;

@interface HMMDailyScheduler : HMFObject

@property (readonly, nonatomic) id<HMMDailySchedulerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)registerDailyTaskRunner:(id)a0;

@end
