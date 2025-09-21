@class NSDictionary;

@interface NURenderPipelineVideoSampleSlice : NSObject

@property (readonly, copy, nonatomic) NSDictionary *videoFrames;
@property (readonly, copy, nonatomic) NSDictionary *metadataSamples;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;

- (id)description;
- (void).cxx_destruct;
- (char)containsMetadataSampleForKey:(id)a0;
- (char)containsVideoFrameForKey:(id)a0;
- (id)initWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 videoFrames:(id)a1 metadataSamples:(id)a2;
- (id)metadataSampleFromKey:(id)a0;
- (id)videoFrameFromKey:(id)a0;

@end
