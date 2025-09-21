@class NSCountedSet, NSDateInterval, NSDate;

@interface ATXContextualActionCountCache : NSObject {
    NSCountedSet *headingToWorkActions;
    NSCountedSet *headingHomeActions;
    NSCountedSet *unspecifiedActions;
    NSCountedSet *allActions;
    NSDateInterval *headingToWorkDateInterval;
    NSDateInterval *headingHomeDateInterval;
    NSDateInterval *otherDateInterval;
}

@property (readonly, nonatomic) NSDate *oldestAction;

- (id)init;
- (void).cxx_destruct;
- (void)addMinimalActionParameter:(id)a0;
- (id)getAllCounts;
- (id)getCountsForContext:(id)a0;
- (char)isHeadingHomeActionTime:(id)a0;
- (char)isHeadingToWorkActionTime:(id)a0;
- (char)isOtherActionTime:(id)a0;

@end
