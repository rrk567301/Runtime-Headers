@interface CCCPUPerformanceCounterSnapshot : NSObject

@property (nonatomic) unsigned long long *snapshotBuffer;
@property (nonatomic) double timeOfSnapshotInNanoseconds;

- (void)update;
- (id)init;

@end
