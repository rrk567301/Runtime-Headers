@class NSString, NURegion, NSObject;
@protocol NUMutableBufferImage, OS_dispatch_queue;

@interface PIInpaintCacheNode : NUCacheNode {
    unsigned long long _baseOperationIndex;
    NSString *_baseIdentifier;
    NSString *_outputKey;
    id<NUMutableBufferImage> _inputImage;
    NURegion *_inputRegion;
    NURegion *_outputRegion;
    NSObject<OS_dispatch_queue> *_retouchQueue;
}

@property (readonly, nonatomic) long long padding;

+ (void)purge;
+ (id)inpaintNodeWithInput:(id)a0 operations:(id)a1 masks:(id)a2 detectedFaces:(id)a3 error:(out id *)a4;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id)outputRegion;
- (id)uniqueInputNode;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)descriptionSubClassHook;
- (id)initWithInputs:(id)a0 settings:(id)a1 subsampleFactor:(long long)a2;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;
- (void)resolveWithInputImage:(id)a0 inpaintOperations:(id)a1 detectedFaces:(id)a2 cacheKey:(id)a3;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_exclusionMaskExtentForOperation:(id)a0 error:(out id *)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_extentForInputIdentifiers:(id)a0 error:(out id *)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_maskExtentForOperation:(id)a0 error:(out id *)a1;
- (id)_modifyEvaluatedGeometry:(id)a0;
- (void)_resolveSourceWithResponse:(id)a0;
- (BOOL)_setupRenderRequest:(id)a0 error:(out id *)a1;
- (BOOL)_tryLoad:(out id *)a0;
- (BOOL)_updateInputRegion:(id)a0 outputRegion:(id)a1 forOperation:(id)a2 geometry:(id)a3 error:(out id *)a4;
- (id)initWithInputs:(id)a0 settings:(id)a1;
- (id)retouchInputNode;

@end
