@interface CCCPUPerformanceCounterSnapshot : NSObject

@property (nonatomic) unsigned long long *snapshotBuffer;
@property (nonatomic) double timeOfSnapshotInNanoseconds;

- (id)init;
- (void)update;

@end
