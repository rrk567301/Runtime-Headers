@class ANSTPixelBufferDescriptor;

@interface ANSTVideoMaskTracking : ANSTAlgorithm

@property (retain, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (retain, nonatomic) ANSTPixelBufferDescriptor *inputMaskDescriptor;
@property (retain, nonatomic) ANSTPixelBufferDescriptor *outputMaskDescriptor;

+ (id)new;
+ (id)algorithmWithConfiguration:(id)a0 error:(id *)a1;

- (BOOL)prepareWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)resetWithError:(id *)a0;
- (long long)newObj:(long long)a0 trackingWithImage:(struct __CVBuffer { } *)a1 maskToTrack:(struct __CVBuffer { } *)a2 outputMaskBuffer:(struct __CVBuffer { } *)a3 outputBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4 andTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;
- (long long)removeObj:(long long)a0;
- (long long)trackObject:(long long)a0 withImage:(struct __CVBuffer { } *)a1 outputMaskBuffer:(struct __CVBuffer { } *)a2 outputBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 updateStrategy:(long long)a4 andTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;

@end
