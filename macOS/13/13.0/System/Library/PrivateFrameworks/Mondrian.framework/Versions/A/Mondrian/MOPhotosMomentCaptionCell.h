@class MOPhotosMomentCaptionTextField;

@interface MOPhotosMomentCaptionCell : MOMediaViewDefaultCell {
    MOPhotosMomentCaptionTextField *_captionTextField;
}

@property (readonly, nonatomic) BOOL usesCaption;
@property (readonly, nonatomic) MOPhotosMomentCaptionTextField *captionTextField;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } captionTextFieldFrame;

+ (BOOL)usesCaption;
+ (struct CGSize { double x0; double x1; })recommendedCellSizeForThumbnailSize:(struct CGSize { double x0; double x1; })a0 inMaxSize:(struct CGSize { double x0; double x1; })a1;
+ (id)captionCellBackgroundColor;
+ (double)captionHeight;
+ (double)captionInterspace;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)setSelected:(BOOL)a0;
- (void)setCaption:(id)a0;
- (void)layoutSubviews;
- (id)captionAttributes;
- (void)prepareForRecycling;
- (void)updateWithMediaItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mouseTrackingBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailViewFrame;
- (void)updateWithTitle:(id)a0 filename:(id)a1;
- (void)_updateCaptionTextField;
- (void)captionTextFieldSetFocus:(BOOL)a0;

@end
