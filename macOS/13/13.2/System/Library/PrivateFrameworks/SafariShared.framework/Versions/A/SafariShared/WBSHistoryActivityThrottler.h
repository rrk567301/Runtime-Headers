@class NSMutableArray;

@interface WBSHistoryActivityThrottler : NSObject {
    NSMutableArray *_activityTimes;
}

@property (nonatomic) unsigned long long activityLimitPerSecond;

- (void).cxx_destruct;
- (id)initWithLimitPerSecond:(unsigned long long)a0;
- (BOOL)shouldRecordHistoryVisitAtTime:(double)a0;

@end
