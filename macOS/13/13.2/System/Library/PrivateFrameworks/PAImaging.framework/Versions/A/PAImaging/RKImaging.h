@interface RKImaging : NSObject

+ (void)initialize;
+ (id)sharedImaging;

- (id)_cpuContext;
- (id)textureForPreviewImage:(id)a0 size:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 device:(id)a2;
- (id)_cpuQueue;
- (id)textureForPreviewCIImage:(id)a0 size:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 colorSpace:(struct CGColorSpace { } *)a2 device:(id)a3;
- (id)newRenderContextForOpenGLContext:(id)a0;
- (id)newCPUContext;

@end
