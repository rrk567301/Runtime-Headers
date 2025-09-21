@class MOPhotosMomentCaptionTextField;

@interface MOPhotosMomentCaptionCell : MOMediaViewDefaultCell {
    MOPhotosMomentCaptionTextField *_captionTextField;
}

@property (readonly, nonatomic) BOOL usesCaption;
@property (readonly, nonatomic) MOPhotosMomentCaptionTextField *captionTextField;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } captionTextFieldFrame;

+ (id)captionCellBackgroundColor;
+ (double)captionHeight;
+ (double)captionInterspace;
+ (struct CGSize { double x0; double x1; })recommendedCellSizeForThumbnailSize:(struct CGSize { double x0; double x1; })a0 inMaxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)usesCaption;

- (BOOL)isOpaque;
- (void)updateLayer;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)setCaption:(id)a0;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsUpdateLayer;
- (id)captionAttributes;
- (void)updateWithMediaItem:(id)a0;
- (void)_updateCaptionTextField;
- (void)captionTextFieldSetFocus:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mouseTrackingBounds;
- (void)prepareForRecycling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailViewFrame;
- (void)updateWithTitle:(id)a0 filename:(id)a1;

@end
