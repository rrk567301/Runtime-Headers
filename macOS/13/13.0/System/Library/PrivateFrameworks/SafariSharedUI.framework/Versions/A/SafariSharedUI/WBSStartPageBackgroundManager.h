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
@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *x0; } prefetchedImageThumbnail;
@property (readonly, copy, nonatomic) NSString *prefetchedImageName;
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
- (struct RetainPtr<CGImage *> { void *x0; })imageForIdentifier:(id)a0;
- (id)ciContext;
- (BOOL)isCorrectBackgroundImageLoadedForIdentifier:(id)a0;
- (void)reloadTabGroupSpecificBackgroundImageFromDisk:(id)a0;
- (void)clearImageWithIdentifier:(id)a0;
- (void)clearPrefetchedImage;
- (void)prefetchImage:(id)a0 completion:(id /* block */)a1;
- (void)prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2;
- (void)processImageForIdentifier:(id)a0;
- (void)commitPrefetchedImageWithLuminance:(double)a0 forIdentifier:(id)a1;
- (void)cacheImageFromURL:(id)a0 completion:(id /* block */)a1;
- (void)loadImageFromDiskForIdentifier:(id)a0;
- (id)appearanceForImage:(struct RetainPtr<CGImage *> { void *x0; })a0;
- (id)appearanceForImageWithIdentifier:(id)a0;
- (id)appearanceIfImageExists:(BOOL)a0;
- (void)tabGroupManager:(id)a0 didRemoveTabGroup:(id)a1;
- (void)_loadImageFromDiskForIdentifier:(id)a0;
- (void)_readImagePropertiesFromImageSource:(struct RetainPtr<CGImageSource> { void *x0; })a0 forImageIdentifier:(id)a1 isTabGroupSpecificBackgroundImage:(BOOL)a2;
- (void)_setImage:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(id)a1 forIdentifier:(id)a2;
- (void)_setImageOnAnyQueue:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(id)a1 forIdentifier:(id)a2;
- (void)_saveImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearance:(id)a1 luminance:(double)a2 forIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)_updateThumbnailIfNeeded;
- (void)_commitImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearanceName:(id)a1 luminance:(double)a2 forIdentifier:(id)a3;
- (void)_processImageForIdentifier:(id)a0;
- (void)_clearPrefetchedImage;
- (void)_prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2 withNanoSecondDelay:(long long)a3;
- (void)_setHasTabGroupSpecificBackgroundImage:(BOOL)a0 forIdentifier:(id)a1;
- (BOOL)_hasTabGroupSpecificBackgroundImage:(id)a0;
- (id)appearanceForLuminance:(double)a0;
- (void)_deleteImageWithIdentifier:(id)a0;
- (struct RetainPtr<CGImage *> { void *x0; })thresholdImage:(struct CGImage { } *)a0 minValue:(double)a1 maxValue:(double)a2 multiplier:(double)a3;
- (struct RetainPtr<CGImage *> { void *x0; })assignImage:(struct RetainPtr<CGImage *> { void *x0; })a0 oldImage:(struct RetainPtr<CGImage *> { void *x0; })a1;
- (struct RetainPtr<CGImage *> { void *x0; })normalizeImage:(struct RetainPtr<CGImage *> { void *x0; })a0 imageSource:(struct RetainPtr<CGImageSource> { void *x0; })a1 properties:(id)a2;
- (struct RetainPtr<CGImage *> { void *x0; })analyzeImageAndThresholdIfNecessary:(struct CGImage { } *)a0 thumbnail:(struct CGImage { } *)a1 precomputedLuminance:(double)a2 getAppearance:(id *)a3 luminance:(double *)a4;

@end
