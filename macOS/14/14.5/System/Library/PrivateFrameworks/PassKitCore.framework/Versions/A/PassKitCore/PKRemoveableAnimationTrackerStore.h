@class NSMutableArray;

@interface PKRemoveableAnimationTrackerStore : NSObject

@property (copy, nonatomic) NSMutableArray *trackers;

- (id)init;
- (void).cxx_destruct;
- (void)remove;
- (void)preempt;

@end
