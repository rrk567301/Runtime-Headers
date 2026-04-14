@interface ANSTSam2MemBank : NSObject

@property (nonatomic) struct __CVBuffer { } *maskmem_features;
@property (nonatomic) struct __CVBuffer { } *maskmem_pos_enc;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } curTime;

- (void)dealloc;
- (id)initWithMem:(id)a0 Pos:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)transposeMem:(id)a0 toPixelBuffer:(struct __CVBuffer **)a1;

@end
