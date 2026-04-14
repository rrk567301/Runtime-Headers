@class UXImageView;

@interface PXDisplayAssetImageContentView : PXDisplayAssetContentView {
    UXImageView *_imageView;
}

- (void).cxx_destruct;
- (id)contentView;
- (void)imageDidChange;
- (long long)playbackStyle;
- (double)loadingProgress;
- (void)contentModeDidChange;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)_updateImageViewContentMode;
- (void)_updateImageViewFilters;

@end
