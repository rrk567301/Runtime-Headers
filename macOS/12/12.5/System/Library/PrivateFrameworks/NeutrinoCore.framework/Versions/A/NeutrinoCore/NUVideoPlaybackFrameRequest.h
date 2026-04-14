@class NUColorSpace, NURenderNode, NSDictionary;

@interface NUVideoPlaybackFrameRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain, nonatomic) struct __CVBuffer { } *destinationBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } evaluationTime;
@property (nonatomic) struct { long long numerator; long long denominator; } renderScale;
@property (retain, nonatomic) NURenderNode *videoRenderPrepareNode;
@property (copy, nonatomic) NSDictionary *videoFrames;
@property (copy, nonatomic) NSDictionary *videoMetadataSamples;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
