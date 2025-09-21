@class MRAssetPlayer, NSString, NSDictionary, MRLayerEffect, NSInvocationOperation, NSLock, MRImage;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable, MRAssetPlayerDelegate> {
    NSInvocationOperation *mPreloadOperation;
    NSLock *mPreloadOperationLock;
    MRImage *mOriginalImage;
    char mIsLoaded;
    struct CGSize { double width; double height; } mImageSize;
    struct CGSize { double width; double height; } mLastImageSize;
    MRAssetPlayer *mSlidePlayer;
    unsigned int mFlags;
    char mIsCleanedUp;
}

@property (nonatomic) struct CGSize { double width; double height; } defaultSize;
@property (copy, nonatomic) NSString *imageSizeScript;
@property (retain, nonatomic) NSDictionary *effectAttributes;
@property (copy, nonatomic) NSString *assetPath;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;
@property (nonatomic) double showTime;
@property (nonatomic) double showDuration;
@property (nonatomic) char wantsMonochromatic;
@property (nonatomic) char wantsMipmap;
@property (nonatomic) char wantsPowerOfTwo;
@property (readonly, nonatomic) struct CGSize { double width; double height; } requestedSize;
@property (readonly, nonatomic) double imageAspectRatio;
@property (readonly, nonatomic) char isLoaded;
@property (nonatomic) char justHoldIt;
@property MRLayerEffect *effectLayer;
@property (readonly, nonatomic) char isNative3D;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) char isAlphaFriendly;
@property (readonly, nonatomic) char isInfinite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (void)unload;
- (void)cancelLoading;
- (char)beginLiveUpdate;
- (void)_computeImageSizeInContext:(id)a0 withArguments:(id)a1;
- (void)_unloadIfNotUpdatingLive;
- (char)endLiveUpdate;
- (void)imageIsAvailableFromAssetPlayer:(id)a0;
- (struct CGSize { double x0; double x1; })imageSizeForAspectRatio:(float)a0;
- (char)isLoadedForTime:(double)a0;
- (void)loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 now:(char)a3;
- (void)loadWithArguments:(id)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (char)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
