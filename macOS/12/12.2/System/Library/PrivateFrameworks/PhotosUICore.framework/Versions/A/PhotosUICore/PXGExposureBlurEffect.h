@class PXGExposureBlurKernel;

@interface PXGExposureBlurEffect : PXGOffscreenEffect {
    PXGExposureBlurKernel *_kernel;
}

@property (nonatomic) double radius;
@property (nonatomic) double exposure;

- (void).cxx_destruct;
- (id)kernel;
- (id)initWithEntityManager:(id)a0;

@end
