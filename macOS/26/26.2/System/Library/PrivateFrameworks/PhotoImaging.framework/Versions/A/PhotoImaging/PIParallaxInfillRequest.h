@class NUPixelFormat, NUColorSpace;
@protocol NUScalePolicy, NUImageBuffer;

@interface PIParallaxInfillRequest : NURenderRequest

@property (retain, nonatomic) id<NUImageBuffer> segmentationMatte;
@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (retain, nonatomic) NUPixelFormat *pixelFormat;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) BOOL shouldInfillForeground;

- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
