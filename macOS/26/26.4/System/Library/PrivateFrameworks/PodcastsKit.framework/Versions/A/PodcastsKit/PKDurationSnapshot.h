@interface PKDurationSnapshot : NSObject

@property (nonatomic, readonly) double snapshotTime;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) double elapsedDuration;
@property (nonatomic, readonly) double duration;

- (id)init;
- (id)initWithSnapshotTime:(double)a0 rate:(float)a1 elapsedDuration:(double)a2 duration:(double)a3;

@end
