@class NSMutableDictionary;
@protocol DDSBackgroundActivitySchedulerDelegate;

@interface DDSBackgroundActivityScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *schedulerByIdentifier;
@property (retain, nonatomic) id<DDSBackgroundActivitySchedulerDelegate> delegate;

- (void)cancelActivityWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)scheduleActivityWithIdentifier:(id)a0 interval:(double)a1 tolerance:(double)a2;

@end
