@class NURenderPipelineState;

@interface NURenderPipelineHelper : NSObject

@property (readonly, nonatomic) NURenderPipelineState *pipelineState;

+ (id)gainMapFromLightMap:(id)a0 base:(id)a1 settings:(id)a2;
+ (id)lightMapFromGainMap:(id)a0 settings:(id)a1;
+ (id)styleTransferApplyNodeWithInput:(id)a0 thumbnail:(id)a1 target:(id)a2 settings:(id)a3;
+ (id)styleTransferInterpolationNodeWithInputs:(id)a0 weights:(id)a1 settings:(id)a2;
+ (id)styleTransferLearnNodeWithInput:(id)a0 target:(id)a1 settings:(id)a2;
+ (id)styleTransferNodeWithInput:(id)a0 target:(id)a1 settings:(id)a2;
+ (id)styleTransferThumbnailNodeWithInput:(id)a0 settings:(id)a1;

- (void).cxx_destruct;
- (id)HDROpticalScaleNode:(id)a0 scale:(double)a1;
- (id)addTagWithName:(id)a0 inputNode:(id)a1 error:(out id *)a2;
- (void)resetTag:(id)a0 input:(id)a1;
- (id)cropNode:(id)a0 cropRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 cropSettings:(id)a2;
- (id)auxiliaryImageFromComposition:(id)a0 type:(id)a1 mediaComponentType:(id)a2 error:(out id *)a3;
- (id)auxiliaryImageNode:(id)a0 type:(long long)a1;
- (id)beginGroupWithName:(id)a0 error:(out id *)a1;
- (id)cacheNode:(id)a0 type:(id)a1 settings:(id)a2 error:(out id *)a3;
- (id)createSloMoWithInput:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 rate:(float)a3 error:(out id *)a4;
- (char)endGroupWithName:(id)a0 error:(out id *)a1;
- (id)filterNode:(id)a0 input:(id)a1 settings:(id)a2;
- (id)filterNode:(id)a0 inputs:(id)a1 settings:(id)a2;
- (id)gainMapHeadroomNode:(id)a0 headroomOffset:(double)a1;
- (id)gainMapNode:(id)a0 contentHeadroom:(double)a1 displayHeadroom:(double)a2;
- (id)getTagWithPath:(id)a0 error:(out id *)a1;
- (char)hasStaticTime;
- (id)initWithPipelineState:(id)a0;
- (id)inputForPath:(id)a0 error:(out id *)a1;
- (char)isCIFilterAvailable:(id)a0 propertyName:(id)a1;
- (char)isSourceAvailable:(id)a0 sourceSettings:(id)a1;
- (id)livePhotoKeyFrameMetadataFromNode:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(out id *)a2;
- (long long)mediaTypeForComposition:(id)a0;
- (long long)orientationFromAdjustmentIn:(id)a0;
- (id)orientedNode:(id)a0 withOrientation:(long long)a1;
- (id)perspectiveTransformWithPitch:(double)a0 yaw:(double)a1 roll:(double)a2 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)renderNodeFromSource:(id)a0 settings:(id)a1 error:(out id *)a2;
- (char)resetTag:(id)a0 input:(id)a1 error:(out id *)a2;
- (id)scaleNode:(id)a0 scale:(struct { long long x0; long long x1; })a1 error:(out id *)a2;
- (id)sourceFromComposition:(id)a0 error:(out id *)a1;
- (id)sourceFromComposition:(id)a0 withName:(id)a1 error:(out id *)a2;
- (id)straightenTransformWithAngle:(double)a0 extent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1;
- (id)switchFromNodes:(id)a0 mainInput:(id)a1 selector:(id /* block */)a2;
- (id)trimInput:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(out id *)a3;
- (id)vectorWithFloats:(id)a0;

@end
