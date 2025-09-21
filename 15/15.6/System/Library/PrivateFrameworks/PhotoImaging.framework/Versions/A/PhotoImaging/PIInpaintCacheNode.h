@class NURegion, NSArray, NSString, NURenderNode, NSObject, NSCache;
@protocol OS_dispatch_queue, NUMutableBufferImage, NUBufferImage;

@interface PIInpaintCacheNode : NUCacheNode {
    NSObject<OS_dispatch_queue> *_inpaintQueue;
    id<NUMutableBufferImage> _inputImage;
    id<NUBufferImage> _outputImage;
    NURegion *_inputRegion;
    NURegion *_outputRegion;
    NSArray *_operations;
    NSString *_cacheKey;
    long long _sourceOrientation;
    char _sourceIsHDR;
}

@property (class, readonly) NSCache *intermediateCache;

@property (readonly, nonatomic) long long padding;
@property (readonly, nonatomic) char shouldCacheIntermediates;
@property (readonly, nonatomic) NURenderNode *inpaintInputNode;

+ (void)purge;
+ (id)inpaintNodeWithInput:(id)a0 operations:(id)a1 masks:(id)a2 error:(out id *)a3;

- (void).cxx_destruct;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (id)outputRegion;
- (id)_evaluateImage:(out id *)a0;
- (id)uniqueInputNode;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)descriptionSubClassHook;
- (id)evaluateRenderDependenciesWithRequest:(id)a0 error:(out id *)a1;
- (id)initWithInputs:(id)a0 settings:(id)a1 subsampleFactor:(long long)a2;
- (id)inputGeometryForPipelineState:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (char)wantsDependentJob;
- (char)_applyInpaintOperation:(id)a0 toImage:(id)a1 operationIndex:(unsigned long long)a2 renderer:(id)a3 error:(out id *)a4;
- (id)_computeBaseIdentifier;
- (void)_debugDumpMaskImage:(id)a0 name:(id)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_exclusionMaskExtentForOperation:(id)a0 error:(out id *)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_extentForInputIdentifiers:(id)a0 error:(out id *)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_maskExtentForOperation:(id)a0 error:(out id *)a1;
- (id)_modifyEvaluatedGeometry:(id)a0;
- (id)_newMaskImageFromIdentifiers:(id)a0 useSourceImage:(char)a1 error:(out id *)a2;
- (char)_renderBackgroundImage:(id)a0 intoMutableBuffer:(id)a1 renderer:(id)a2 error:(out id *)a3;
- (char)_renderWithBackgroundImage:(id)a0 error:(out id *)a1;
- (char)_tryLoad:(out id *)a0;
- (char)_updateInputRegion:(id)a0 outputRegion:(id)a1 forOperation:(id)a2 geometry:(id)a3 error:(out id *)a4;
- (char)applyInpaintOperations:(id)a0 toImage:(id)a1 renderer:(id)a2 error:(out id *)a3;
- (id)initWithInputs:(id)a0 settings:(id)a1;
- (id)newExclusionMaskImageForOperation:(id)a0 inputImage:(id)a1 error:(out id *)a2;
- (id)newImageOfSize:(struct { long long x0; long long x1; })a0 colorSpace:(id)a1;
- (id)newMaskImageForOperation:(id)a0 useSourceImage:(char)a1 error:(out id *)a2;
- (char)shouldDumpSourceMasks;
- (char)tryLoad:(out id *)a0;

@end
