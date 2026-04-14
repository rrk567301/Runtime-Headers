@protocol HMMDailySchedulerDelegate;

@interface HMMDailyScheduler : HMFObject

@property (readonly, nonatomic) id<HMMDailySchedulerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)registerDailyTaskRunner:(id)a0;

@end
