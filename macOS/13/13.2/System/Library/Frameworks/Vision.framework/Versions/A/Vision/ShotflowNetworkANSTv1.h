@interface ShotflowNetworkANSTv1 : ShotflowNetworkANODBase

+ (float)inputScale;
+ (id)modelName;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (id)inputLayerName;
+ (struct tuple<float, float, float> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> { float x0; float x1; float x2; } x0; })inputBiasRGB;
+ (BOOL)inputBGR;
+ (BOOL)hasPose;
+ (unsigned long long)mumberPosClasses;
+ (const void *)importantClasses;

- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)processVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inputIsBGR:(BOOL)a1;

@end
