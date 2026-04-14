@class UXImageView;

@interface PXDisplayAssetImageContentView : PXDisplayAssetContentView {
    UXImageView *_imageView;
}

- (void).cxx_destruct;
- (id)contentView;
- (void)imageDidChange;
- (long long)playbackStyle;
- (double)loadingProgress;
- (void)_updateImageViewContentMode;
- (void)_updateImageViewFilters;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderImageFiltersDidChange;

@end
