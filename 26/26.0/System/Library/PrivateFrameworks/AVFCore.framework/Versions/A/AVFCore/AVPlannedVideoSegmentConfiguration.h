@interface AVPlannedVideoSegmentConfiguration : AVPlannedSegmentConfiguration

@property (readonly) long long frameCount;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumberOfFrames:(long long)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
