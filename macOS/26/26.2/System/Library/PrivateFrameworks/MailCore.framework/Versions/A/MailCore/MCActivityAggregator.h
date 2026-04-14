@class MCActivityAggregate;

@interface MCActivityAggregator : NSObject

@property (readonly, nonatomic) MCActivityAggregate *in;
@property (readonly, nonatomic) MCActivityAggregate *out;
@property (readonly, nonatomic) MCActivityAggregate *save;
@property (readonly, nonatomic) MCActivityAggregate *synchronizingActivityAggregate;
@property (readonly, nonatomic) MCActivityAggregate *downloadingContentAggregate;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)activityMonitor:(id)a0 didChangeTypeFrom:(long long)a1;

@end
