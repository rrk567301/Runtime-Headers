@interface CIColorKernel : CIKernel

@property (nonatomic) BOOL perservesAlpha;
@property (readonly, nonatomic) BOOL preservesOpacity;

+ (id)kernelWithString:(id)a0;
+ (id)SDOFV3MetalKernelNamed:(id)a0;
+ (id)SDOFV2MetalKernelNamed:(id)a0;

- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; char *x4; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x0; int *x1; int *x2; } x5; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; } x6; id x7; unsigned int x8; int x9; unsigned long long x10; unsigned long long x11; BOOL x12; BOOL x13; })a0 constants:(id)a1 constantTypes:(id)a2;
- (void)setPreservesRange:(BOOL)a0;
- (BOOL)unassociatedAlpha;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arguments:(id)a1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2 options:(id)a3;
- (void)setCanReduceOutputChannels:(BOOL)a0;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arguments:(id)a1 options:(id)a2;
- (BOOL)canReduceOutputChannels;
- (BOOL)preservesRange;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2;
- (id)initWithString:(id)a0;

@end
