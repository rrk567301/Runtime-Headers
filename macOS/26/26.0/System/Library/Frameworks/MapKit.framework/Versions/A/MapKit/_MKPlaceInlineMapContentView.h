@class _MKUILabel, NSImage, NSView, MKViewWithHairline, NSLayoutConstraint, MKImageView;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {
    MKViewWithHairline *_hairlineView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_titleToBottomConstraint;
    NSView *_mapView;
    MKImageView *_mapImageView;
    _MKUILabel *_titleLabel;
}

@property (retain, nonatomic) NSImage *map;
@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasTitle;
- (double)titleHeight;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hideLookAroundView:(BOOL)a1 showMapAttribution:(BOOL)a2 mapSnapshotAuditToken:(id)a3;
- (double)mapViewHeight;
- (BOOL)useImageView;

@end
