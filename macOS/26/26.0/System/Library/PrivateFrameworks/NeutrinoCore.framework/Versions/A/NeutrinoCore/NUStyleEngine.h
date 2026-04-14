@class NSDictionary, _NUStyleEngine;
@protocol MTLCommandQueue;

@interface NUStyleEngine : NSObject

@property (class, readonly, nonatomic) BOOL supportsIntensity;

@property (readonly, nonatomic) _NUStyleEngine *engine;
@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, copy, nonatomic) NSDictionary *configuration;
@property (readonly, copy, nonatomic) NSDictionary *tuningParameters;
@property (readonly, nonatomic) struct { long long x0; long long x1; } thumbnailTextureSize;
@property (readonly, nonatomic) struct { long long x0; long long x1; } coefficientsTextureSize;

+ (id)styleEngineForUsage:(long long)a0 withMetalCommandQueue:(id)a1 configuration:(id)a2 tuningParams:(id)a3;

- (id)init;
- (id)initWithEngine:(id)a0;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toBuffer:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 intensity:(float)a5 error:(out id *)a6;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toBuffer:(id)a2 error:(out id *)a3;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toBuffer:(id)a2 intensity:(float)a3 error:(out id *)a4;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toBuffer:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 error:(out id *)a5;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toTexture:(id)a2 error:(out id *)a3;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toTexture:(id)a2 intensity:(float)a3 error:(out id *)a4;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toTexture:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 error:(out id *)a5;
- (BOOL)applyStyle:(id)a0 thumbnail:(id)a1 toTexture:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 intensity:(float)a5 error:(out id *)a6;
- (id)generateIdentityStyle:(out id *)a0;
- (BOOL)generateThumbnailBuffer:(id)a0 fromBuffer:(id)a1 error:(out id *)a2;
- (BOOL)generateThumbnailBuffer:(id)a0 fromBuffer:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(out id *)a3;
- (id)generateThumbnailFromBuffer:(id)a0 error:(out id *)a1;
- (id)generateThumbnailFromBuffer:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(out id *)a2;
- (id)generateThumbnailFromTexture:(id)a0 error:(out id *)a1;
- (id)generateThumbnailFromTexture:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(out id *)a2;
- (BOOL)generateThumbnailTexture:(id)a0 fromTexture:(id)a1 error:(out id *)a2;
- (BOOL)generateThumbnailTexture:(id)a0 fromTexture:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(out id *)a3;
- (id)learnStyleFromBuffer:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toBuffer:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 error:(out id *)a4;
- (id)learnStyleFromBuffer:(id)a0 toTexture:(id)a1 error:(out id *)a2;
- (id)learnStyleFromTexture:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toTexture:(id)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 error:(out id *)a4;
- (id)learnStyleFromTexture:(id)a0 toTexture:(id)a1 error:(out id *)a2;
- (id)learnStyleFromThumbnailBuffer:(id)a0 toThumbnailBuffer:(id)a1 error:(out id *)a2;
- (id)learnStyleFromThumbnailTexture:(id)a0 toThumbnailTexture:(id)a1 error:(out id *)a2;

@end
