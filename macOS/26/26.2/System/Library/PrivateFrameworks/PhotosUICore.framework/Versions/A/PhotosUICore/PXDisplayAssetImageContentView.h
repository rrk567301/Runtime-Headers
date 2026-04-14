@class UXImageView;

@interface PXDisplayAssetImageContentView : PXDisplayAssetContentView {
    UXImageView *_imageView;
}

@property (readonly, nonatomic) long long currentPreferredImageDynamicRangeValue;

- (id)contentView;
- (void).cxx_destruct;
- (double)loadingProgress;
- (void)imageDidChange;
- (long long)playbackStyle;
- (void)_updateImageViewContentMode;
- (void)_updateImageViewFilters;
- (void)_updateImageViewPreferredImageDynamicRange;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)effectivePreferredImageDynamicRangeDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderImageFiltersDidChange;

@end
