@class NSString, NSURL, NSAppearance, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundManager : NSObject <WBTabGroupManagerObserver> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImage;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImageThumbnail;
    NSURL *_prefetchedImageURL;
    NSString *_lastPrefetchedFilePath;
    _Atomic long long _prefetchingCoalescingDelay;
    double _prefetchedImageLuminance;
    NSURL *_imageURL;
    NSAppearance *_appearance;
    NSMutableDictionary *_backgroundImageIdentifierToImage;
    NSMutableDictionary *_backgroundImageIdentifierToLuminance;
}

@property (class, readonly, nonatomic) WBSStartPageBackgroundManager *defaultManager;

@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *m_ptr; } image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (id)ciColorKernel;
+ (BOOL)shouldSkipPostProcessing;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearImage;
- (id)initWithImageURL:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })fetchImage:(id)a0;
- (id)ciContext;
- (void)loadImageFromDiskForIdentifier:(id)a0;
- (id)appearanceForImage:(struct RetainPtr<CGImage *> { void *x0; })a0;
- (id)appearanceForImageWithIdentifier:(id)a0 forProfile:(id)a1;
- (id)appearanceIfImageExists:(BOOL)a0;
- (void)cacheImageFromURL:(id)a0 completion:(id /* block */)a1;
- (void)clearImageWithIdentifier:(id)a0 withinProfile:(BOOL)a1;
- (void)clearPrefetchedImage;
- (void)commitPrefetchedImageWithLuminance:(double)a0 forIdentifier:(id)a1 isGeneratedImage:(BOOL)a2 withinProfile:(BOOL)a3;
- (void)generateProfileSpecificBackgroundImageWithSymbol:(id)a0 forProfile:(id)a1 withColor:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)hasGeneratedBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (BOOL)hasGlobalBackgroundImage;
- (BOOL)hasProfileSpecificBackgroundImage:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })imageForIdentifier:(id)a0 forProfile:(id)a1;
- (BOOL)isCorrectBackgroundImageLoadedForIdentifier:(id)a0;
- (void)prefetchImage:(id)a0 completion:(id /* block */)a1;
- (void)prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2;
- (id)prefetchedImageNameForProfile:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })prefetchedImageThumbnailForProfile:(id)a0;
- (id)presetIconColorForSymbol:(id)a0;
- (void)processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2;
- (void)processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reloadProfileSpecificBackgroundImageFromDisk:(id)a0;
- (void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveProfileWithIdentifier:(id)a1;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (long long)_generatedImageScaleWithSymbol:(id)a0;
- (void)_clearPrefetchedImage;
- (void)_commitImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearanceName:(id)a1 luminance:(double)a2 forIdentifier:(id)a3 isGeneratedImage:(BOOL)a4 withinProfile:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)_deleteImageWithIdentifier:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })_fetchImage:(id)a0 source:(struct RetainPtr<CGImageSource> { void *x0; })a1 adjustForDarkAppearance:(BOOL)a2;
- (double)_iconOpacityForBackgroundColor:(id)a0 forDarkIcon:(BOOL)a1;
- (void)_loadImageFromDiskForIdentifier:(id)a0;
- (void)_prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2 withNanoSecondDelay:(long long)a3;
- (unsigned long long)_primaryIndexForImage:(id)a0 source:(struct RetainPtr<CGImageSource> { void *x0; })a1 adjustForDarkAppearance:(BOOL)a2;
- (void)_processImageForIdentifier:(id)a0 isGeneratedImage:(BOOL)a1 withinProfile:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_readImagePropertiesFromImageSource:(struct RetainPtr<CGImageSource> { void *x0; })a0 forImageIdentifier:(id)a1 isNonGlobalBackgroundImage:(BOOL)a2;
- (void)_saveImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearance:(id)a1 luminance:(double)a2 forIdentifier:(id)a3 isGeneratedImage:(BOOL)a4 withinProfile:(BOOL)a5 completion:(id /* block */)a6;
- (void)_setHasProfileSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (void)_setHasTabGroupSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (void)_setImage:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(id)a1 forIdentifier:(id)a2;
- (void)_setImageOnAnyQueue:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(id)a1 forIdentifier:(id)a2;
- (BOOL)_tabGroupShouldInheritProfileBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (BOOL)_tabGroupShouldUseGlobalBackgroundImage:(id)a0 forProfileWithIdentifier:(id)a1;
- (struct RetainPtr<CGImage *> { void *x0; })_templateImageWithImage:(id)a0 color:(id)a1;
- (struct RetainPtr<CGImage *> { void *x0; })_thumbnailForImage:(id)a0 source:(struct RetainPtr<CGImageSource> { void *x0; })a1 adjustForDarkAppearance:(BOOL)a2;
- (void)_updateThumbnailIfNeeded;
- (struct RetainPtr<CGImage *> { void *x0; })analyzeImageAndThresholdIfNecessary:(struct CGImage { } *)a0 thumbnail:(struct CGImage { } *)a1 precomputedLuminance:(double)a2 getAppearance:(id *)a3 luminance:(double *)a4;
- (id)appearanceForLuminance:(double)a0;
- (struct RetainPtr<CGImage *> { void *x0; })assignImage:(struct RetainPtr<CGImage *> { void *x0; })a0 oldImage:(struct RetainPtr<CGImage *> { void *x0; })a1;
- (BOOL)hasTabGroupSpecificBackgroundImage:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })normalizeImage:(struct RetainPtr<CGImage *> { void *x0; })a0 imageSource:(struct RetainPtr<CGImageSource> { void *x0; })a1 properties:(id)a2;
- (struct RetainPtr<CGImage *> { void *x0; })thresholdImage:(struct CGImage { } *)a0 minValue:(double)a1 maxValue:(double)a2 multiplier:(double)a3;

@end
