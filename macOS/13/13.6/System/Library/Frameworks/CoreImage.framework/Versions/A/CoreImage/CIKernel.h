@class NSString;

@interface CIKernel : NSObject {
    void *_priv;
}

@property (nonatomic) BOOL perservesAlpha;
@property (nonatomic) BOOL canReduceOutputChannels;
@property (nonatomic) BOOL preservesRange;
@property (nonatomic) struct CGSize { double x0; double x1; } outputGroupSize;
@property (readonly, nonatomic) int outputFormat;
@property (readonly) NSString *name;

+ (id)cache;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 error:(id *)a2;
+ (id)kernelWithString:(id)a0;
+ (id)kernelsWithString:(id)a0;
+ (id)SDOFV3MetalKernelNamed:(id)a0;
+ (id)SDOFV2MetalKernelNamed:(id)a0;
+ (id)allocForType:(int)a0;
+ (id)betterString:(id)a0;
+ (id)cachedKernelWithString:(id)a0;
+ (void)clearCache;
+ (id)colorMatrixBiasKernel;
+ (id)hashForString:(id)a0;
+ (id)kernelNamesFromMetalLibraryData:(id)a0;
+ (id)kernelWithFunctionName:(id)a0 fromCIKernelLibraryData:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 constants:(id)a2 error:(id *)a3;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 outputGroupSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 outputPixelFormat:(int)a2 error:(id *)a3;
+ (id)kernelWithString:(id)a0 fromMetalLibraryData:(id)a1;
+ (id)kernelsWithMetalString:(id)a0 error:(id *)a1;
+ (id)kernelsWithString:(id)a0 andMetalLibrary:(id)a1 messageLog:(id)a2;
+ (id)kernelsWithString:(id)a0 fromMetalLibraryData:(id)a1;
+ (id)kernelsWithString:(id)a0 messageLog:(id)a1;
+ (id)modifiedKernelStringForFosl:(id)a0;
+ (unsigned long long)xxhashForString:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithString:(id)a0;
- (id)parameters;
- (void)setROISelector:(SEL)a0;
- (SEL)ROISelector;
- (id)_initWithInternalRepresentation:(void *)a0;
- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x0; int *x1; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int *x0; } x2; } x4; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; BOOL x12; })a0;
- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x0; int *x1; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int *x0; } x2; } x4; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; BOOL x12; })a0 constants:(id)a1 constantTypes:(id)a2;
- (id)_initWithString:(id)a0 andMetalLibrary:(id)a1 usingCruftCompatibility:(BOOL)a2;
- (id)_initWithString:(id)a0 usingCruftCompatibility:(BOOL)a1;
- (void *)_internalRepresentation;
- (BOOL)_isValidOutputPixelFormat:(int)a0;
- (int)_outputFormatUsingDictionary:(id)a0 andKernel:(void *)a1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2 options:(id)a3;

@end
