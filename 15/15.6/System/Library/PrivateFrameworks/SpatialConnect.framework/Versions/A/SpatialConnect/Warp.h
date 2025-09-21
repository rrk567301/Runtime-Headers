@protocol MTLFunction, MTLBuffer, MTLRenderPipelineState;

@interface Warp : NSObject {
    id<MTLFunction> _vertexFunction;
    id<MTLFunction> _fragmentFunction;
    id<MTLRenderPipelineState> _warpRenderPipelineState;
    unsigned long long _destinationPixelFormat;
    id<MTLBuffer> _vertexBuffer;
    id<MTLBuffer> _indexBuffer;
}

+ (struct _WarpDynamicParameters { float x0; float x1; float x2; })defaultDynamicParametersFromStaticParameters:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })a0;
+ (struct _WarpRenderOptions { char x0; char x1; })defaultRenderOptions;
+ (id)serialiseWarpDynamicParameters:(struct _WarpDynamicParameters { float x0; float x1; float x2; })a0;
+ (id)convertRegionFromUnwarpedToWarped:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingWarpMap:(id)a1;
+ (struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })defaultMaxStaticParametersForInputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 withWarpMode:(int)a1;
+ (struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })defaultMinStaticParametersForInputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 withWarpMode:(int)a1;
+ (id)defaultOptimizationOrderWithWarpMode:(int)a0;
+ (struct _WarpDynamicParameters { float x0; float x1; float x2; })deserialiseWarpDynamicParameters:(id)a0;
+ (struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })deserialiseWarpStaticParameters:(id)a0;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })maxWarpedSizeForStaticParameters:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })a0 withDevice:(id)a1;
+ (struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })optimizeStaticParameters:(id)a0 betweenMax:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })a1 andMin:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })a2 forTargetWarpedPixelCount:(struct { int x0; union { unsigned long long x0; } x1; })a3 withDevice:(id)a4;
+ (id)serialiseWarpStaticParameters:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })a0;
+ (BOOL)validateDynamicParameters:(struct _WarpDynamicParameters { float x0; float x1; float x2; })a0 withStaticParameters:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })a1;
+ (id)warpMapWithStaticParameters:(struct _WarpStaticParameters { int x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; float x2; float x3; float x4; float x5; int x6; char x7; char x8; })a0 withDynamicParameters:(struct _WarpDynamicParameters { float x0; float x1; float x2; })a1 clampRateMaxCenter:(char)a2 outputRateMaxRectInWarpSpace:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } *)a3 withDevice:(id)a4;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 destinationPixelFormat:(unsigned long long)a1;
- (unsigned long long)destinationPixelFormat;
- (BOOL)warpFromTexture:(id)a0 toTexture:(id)a1 withWarpMap:(id)a2 withCommandBuffer:(id)a3 withOptions:(struct _WarpRenderOptions { char x0; char x1; })a4;

@end
