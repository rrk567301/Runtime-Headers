@class NSArray, NSMutableArray;

@interface PKRemoveableAnimationTrackerStore : NSObject {
    NSMutableArray *_trackers;
}

@property (readonly, copy, nonatomic) NSArray *trackers;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)remove;
- (void)preempt;

@end
