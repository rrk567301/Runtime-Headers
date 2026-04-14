@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTEffectUtil : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _updateFocusObject;
    id<MTLComputePipelineState> _effectSampleFaceRects;
    id<MTLComputePipelineState> _clear;
    id<MTLComputePipelineState> _updateDisparityWithScreenCaptureRect;
}

+ (unsigned long long)aspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)closestAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (void /* unknown type, empty encoding */)computeRectInPixelCoordinates:(id)a0 pixelBufferSize:(SEL)a1 alignment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)faceRectsForVision:(void *)a0 numberOfFaceRects:(int)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (void /* unknown type, empty encoding */)inverseRectTransform:(SEL)a0;
+ (void /* unknown type, empty encoding */)multiplyRectTransform:(id)a0 withRectTransform:(SEL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rotateNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 inverse:(BOOL)a2;
+ (void /* unknown type, empty encoding */)screenSpaceToCameraSpace:(SEL)a0 zValue:(float)a1 inverseProjection:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
+ (void /* unknown type, empty encoding */)transformRect:(id)a0 intoCropCoordinates:(SEL)a1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (void)clearTexture:(id)a0 outTex:(id)a1;
- (void)sampleFaceRects:(id)a0 maxFaceRects:(int)a1 faceRects:(void *)a2 faceRectsState:(int *)a3 focusDisparityMax:(float)a4 inDisparity:(id)a5 outFaceDistanceArray:(id)a6;
- (void)updateDisparity:(id)a0 inScreenCaptureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inDisparity:(id)a2 outDisparity:(id)a3 focalLenIn35mmFilm:(float)a4 fNumber:(float)a5;
- (void)updateFocusObject:(id)a0 faceRectCount:(int)a1 disparityFocusOffsetSDOF:(struct PTDisparityFocusOffset { float x0; float x1; })a2 disparityFocusOffsetReactions:(struct PTDisparityFocusOffset { float x0; float x1; })a3 disparityFocusOffsetStudioLight:(struct PTDisparityFocusOffset { float x0; float x1; })a4 exponentialMovingAverageSDOF:(float)a5 exponentialMovingAverageStudioLight:(float)a6 faceRectsState:(int *)a7 isFirstFrame:(BOOL)a8 emitNewReaction:(BOOL)a9 focusOnAll:(BOOL)a10 lastFocus:(id)a11 inFaceDisparityArray:(id)a12 outDisparityModifiers:(id)a13 outDisparityFocus:(id)a14 outStudioLightEffectModifier:(id)a15 outUseDisparityBufferForReactions:(id)a16;

@end
