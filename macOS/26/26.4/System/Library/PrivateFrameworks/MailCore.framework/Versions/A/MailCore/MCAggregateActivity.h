@class NSMutableSet;

@interface MCAggregateActivity : MCActivity

@property (readonly, nonatomic) NSMutableSet *childActivities;
@property (readonly, nonatomic) unsigned long long childCount;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addChildActivity:(id)a0 withProgressUnitCount:(long long)a1;
- (void)childActivityFinished:(id)a0;

@end
