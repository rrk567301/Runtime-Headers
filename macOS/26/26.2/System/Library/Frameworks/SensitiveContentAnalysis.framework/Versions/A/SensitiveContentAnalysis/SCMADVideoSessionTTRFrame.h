@protocol MADVideoSessionTTRFrameForward;

@interface SCMADVideoSessionTTRFrame : NSObject

@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) id<MADVideoSessionTTRFrameForward> frame;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;

- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(unsigned int)a2;

@end
