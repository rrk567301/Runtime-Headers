@class NSString, NSURL, NSAppearance, NSObject;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundManager : NSObject {
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
}

@property (class, readonly, nonatomic) WBSStartPageBackgroundManager *defaultManager;

@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *m_ptr; } image;
@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *x0; } prefetchedImageThumbnail;
@property (readonly, copy, nonatomic) NSString *prefetchedImageName;

+ (void)warmUp;
+ (id)ciColorKernel;
+ (BOOL)shouldSkipPostProcessing;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearImage;
- (id)initWithImageURL:(id)a0;
- (id)ciContext;
- (id)appearanceIfImageExists:(BOOL)a0;
- (void)clearPrefetchedImage;
- (void)processImage;
- (void)cacheImageFromURL:(id)a0 completion:(id /* block */)a1;
- (id)appearanceForImage:(struct RetainPtr<CGImage *> { void *x0; })a0;
- (void)prefetchImage:(id)a0 completion:(id /* block */)a1;
- (void)commitPrefetchedImageWithLuminance:(double)a0;
- (void)prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2;
- (void)loadImageFromDisk;
- (void)_loadImageFromDisk;
- (void)_setImageOnAnyQueue:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(id)a1;
- (void)_setImage:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(id)a1;
- (void)_processImage;
- (void)_commitImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearanceName:(id)a1;
- (void)_clearPrefetchedImage;
- (void)_saveImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearance:(id)a1 completion:(id /* block */)a2;
- (void)_updateThumbnailIfNeeded;
- (struct RetainPtr<CGImage *> { void *x0; })analyzeImageAndThresholdIfNecessary:(struct CGImage { } *)a0 thumbnail:(struct CGImage { } *)a1 precomputedLuminance:(double)a2 appearance:(id *)a3;
- (struct RetainPtr<CGImage *> { void *x0; })assignImage:(struct RetainPtr<CGImage *> { void *x0; })a0 oldImage:(struct RetainPtr<CGImage *> { void *x0; })a1;
- (void)_prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2 withNanoSecondDelay:(long long)a3;
- (struct RetainPtr<CGImage *> { void *x0; })normalizeImage:(struct RetainPtr<CGImage *> { void *x0; })a0 imageSource:(struct RetainPtr<CGImageSource> { void *x0; })a1 properties:(id)a2;
- (struct RetainPtr<CGImage *> { void *x0; })thresholdImage:(struct CGImage { } *)a0 minValue:(double)a1 maxValue:(double)a2 multiplier:(double)a3;
- (id)appearanceForLuminance:(double)a0;

@end
