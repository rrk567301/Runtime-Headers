@class NSString, NSDictionary, MRImage, MRLayer;

@interface MRTransition : NSObject <MRLoadable, MRRenderable> {
    NSDictionary *mDescription;
    id mTransitioner;
    MRImage *mOutputImage;
    NSDictionary *mFlattenedAttributes;
    char mNeedsToUpdateAttributes;
}

@property (copy) NSString *presetID;
@property (readonly) char isSplit;
@property (retain) MRLayer *sourceLayer;
@property (retain) MRLayer *targetLayer;
@property (retain, nonatomic) MRImage *sourceLayerImage;
@property (retain, nonatomic) MRImage *targetLayerImage;
@property (readonly) NSString *transitionID;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly) double progress;
@property (readonly, nonatomic) char controlsLayersTime;
@property (readonly, nonatomic) char noContentsMotion;
@property (readonly, nonatomic) char needsSourceLayerImageForPrecomputing;
@property (readonly, nonatomic) char needsTargetLayerImageForPrecomputing;
@property (readonly) char supportsDirectionOverride;
@property (nonatomic) char direction;
@property (readonly, nonatomic) char isNative3D;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaFriendly;
@property (readonly, nonatomic) char isInfinite;

+ (id)retainedTransitionWithTransitionID:(id)a0 forTransitioner:(id)a1;

- (void)dealloc;
- (void)cleanup;
- (void)unload;
- (char)isTransitioning;
- (void)cancelLoading;
- (double)pzrEnd:(id)a0;
- (char)dependsOnFingerPosition;
- (id)initWithTransitionID:(id)a0;
- (char)isLoadedForTime:(double)a0;
- (char)isRetainedByTransitioner;
- (void)loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 now:(char)a3;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)releaseByTransitioner:(id)a0;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)retainByTransitioner:(id)a0;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
