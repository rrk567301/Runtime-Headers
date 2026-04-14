@class NSString, MOMediaViewCellThumbnailView, NSView, CALayer;

@interface MOMediaViewDefaultCell : MOMediaViewCell <MOMediaViewCellThumbnailViewDelegate> {
    BOOL _thumbnailViewImageInitialized;
    double _thumbnailCornerRadiusForLayout;
    struct CGSize { double width; double height; } _thumbnailSizeForLayout;
    unsigned long long _thumbnailVersion;
    CALayer *_selectionLayer;
    CALayer *_selectionInterspaceLayer;
    CALayer *_modalSelectionDimmingLayer;
    NSView *_modalSelectionIndicatorView;
}

@property (readonly, nonatomic) MOMediaViewCellThumbnailView *thumbnailView;
@property (readonly, nonatomic) BOOL wantsTransparentThumbnailBackground;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailViewFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveThumbnailViewFrame;
@property (readonly, nonatomic) CALayer *thumbnailCornerLayer;
@property (nonatomic) double thumbnailCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGColor { } *)thumbnailEmptyColor;
+ (id)thumbnailEmptyImage;
+ (struct CGColor { } *)modalSelectionDimmingColor;
+ (BOOL)supportsSelectionAnimation;
+ (void)clearColorCaches;
+ (id)thumbnailContentsGravity;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)_isEmpty;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)setSelected:(BOOL)a0;
- (id)thumbnailImage;
- (unsigned long long)thumbnailVersion;
- (void)layoutSubviews;
- (id)selectionLayer;
- (double)selectionBorderWidth;
- (void)setSelectionBorderShouldUsePrimaryColor:(BOOL)a0;
- (void)_updateSelectionBorderColor;
- (void)_setMediaView:(id)a0;
- (void)prepareForRecycling;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(BOOL)a1 animated:(BOOL)a2;
- (void)_setNeedsUpdateColors;
- (void)updateWithMediaItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mouseTrackingBounds;
- (BOOL)useNearestInterpolation;
- (id)accessibilityRoleDescriptionForMediaViewCellThumbnailView:(id)a0;
- (id)accessibilityIdentifierForMediaViewCellThumbnailView:(id)a0;
- (BOOL)mediaViewCellThumbnailViewWantsTransparentThumbnailBackground:(id)a0;
- (struct CGColor { } *)thumbnailEmptyColorForMediaViewCellThumbnailView:(id)a0;
- (id)thumbnailEmptyImageForMediaViewCellThumbnailView:(id)a0;
- (void)_layoutSelectionLayerIfNeeded;
- (void)_layoutModalSelectionIfNeeded;
- (void)setThumbnailContentsGravity:(id)a0;
- (void)indicateSelectionState:(BOOL)a0 animated:(BOOL)a1;
- (struct CGColor { } *)primarySelectionBorderColor;
- (struct CGColor { } *)secondarySelectionBorderColor;
- (struct CGColor { } *)selectionBorderInterspaceColor;
- (double)selectionBorderCornerRadius;
- (double)selectionBorderInterspaceWidth;
- (id)selectionBorderAnchorView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBorderFrame;
- (void)_updateModalSelection:(BOOL)a0;
- (void)_updateModalState;
- (id)newModalSelectionIndicatorView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForModalSelectionIndicatorOfSize:(struct CGSize { double x0; double x1; })a0;

@end
