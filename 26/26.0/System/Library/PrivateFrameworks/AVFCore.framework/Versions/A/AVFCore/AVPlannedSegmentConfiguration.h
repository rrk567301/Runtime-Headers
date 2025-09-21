@interface AVPlannedSegmentConfiguration : NSObject

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
