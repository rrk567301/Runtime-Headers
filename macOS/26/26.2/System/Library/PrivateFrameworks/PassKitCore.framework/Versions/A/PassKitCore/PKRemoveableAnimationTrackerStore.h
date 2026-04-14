@class NSArray, NSMutableArray;

@interface PKRemoveableAnimationTrackerStore : NSObject {
    NSMutableArray *_trackers;
}

@property (readonly, copy, nonatomic) NSArray *trackers;

- (void)clear;
- (void)remove;
- (void).cxx_destruct;
- (id)init;
- (void)preempt;

@end
