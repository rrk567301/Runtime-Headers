@interface MADVideoSessionPixelBufferAsset : NSObject {
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
    unsigned int _orientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timestamp;
}

@property (nonatomic) BOOL userSafetyEligible;

+ (id)assetWithPixelBuffer:(struct __CVBuffer { } *)a0 frameProperties:(id)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (int)loadPixelBuffer:(struct __CVBuffer **)a0 orientation:(unsigned int *)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
