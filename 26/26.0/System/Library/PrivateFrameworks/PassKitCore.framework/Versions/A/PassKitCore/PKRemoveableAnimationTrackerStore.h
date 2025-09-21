@class NSArray, NSMutableArray;

@interface PKRemoveableAnimationTrackerStore : NSObject {
    NSMutableArray *_trackers;
}

@property (readonly, copy, nonatomic) NSArray *trackers;

- (void)clear;
- (id)init;
- (void)remove;
- (void).cxx_destruct;
- (void)preempt;

@end
