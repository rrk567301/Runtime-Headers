@class UXView, PHAnimatedImage, UXImageView, ISAnimatedImageView;
@protocol PXDisplayAsset;

@interface PXDisplayAssetAnimatedImageContentView : PXDisplayAssetContentView

@property (readonly, nonatomic) UXView *contentContainerView;
@property (readonly, nonatomic) UXImageView *placeholderImageView;
@property (readonly, nonatomic) ISAnimatedImageView *animatedImageView;
@property (retain, nonatomic) id<PXDisplayAsset> animatedImageAsset;
@property (nonatomic) double animatedImageLoadingProgress;
@property (retain, nonatomic) PHAnimatedImage *animatedImage;

- (void)updateContent;
- (double)loadingProgress;
- (void)setAsset:(id)a0;
- (void)layoutSubviews;
- (id)contentView;
- (void).cxx_destruct;
- (void)imageDidChange;
- (long long)playbackStyle;
- (void)_handleAnimatedImage:(id)a0 info:(id)a1 forAsset:(id)a2;
- (void)_handleProgress:(double)a0 forAsset:(id)a1;
- (void)_invalidateAnimatedImage;
- (void)_invalidateSubviewsVisibility;
- (BOOL)_isResultValidForAsset:(id)a0;
- (void)_updateAnimatedImage;
- (void)_updateSubviewsVisibility;
- (void)contentModeDidChange;
- (void)imageProgressDidChange;
- (BOOL)isDisplayingFullQualityContent;

@end
