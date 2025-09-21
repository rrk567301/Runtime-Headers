@interface VNTrackMaskDetectorState : NSObject

@property BOOL firstFrame;
@property (readonly) struct __CVBuffer { } *inititalMask;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameUpdateSpacing;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastUpdatePTS;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastProcessedPTS;
@property float confidence;
@property struct __CVBuffer { } *previousKey;
@property struct __CVBuffer { } *previousValue;
@property struct __CVBuffer { } *hiddenMaskBuffer;
@property struct __CVBuffer { } *hiddenMaskBufferOutput;
@property struct __CVBuffer { } *previousKeyOutput;
@property struct __CVBuffer { } *previousValueOutput;
@property struct __CVBuffer { } *outputMask;
@property struct __CVBuffer { } *quality;
@property struct __CVBuffer { } *output;

- (void)dealloc;
- (id)init;
- (id)initWithFrameUpdateSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 mask:(struct __CVBuffer { } *)a1;

@end
