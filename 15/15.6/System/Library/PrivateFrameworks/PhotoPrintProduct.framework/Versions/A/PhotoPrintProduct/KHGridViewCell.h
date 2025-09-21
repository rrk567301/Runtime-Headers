@class UXView, UXCollectionView, UXImageView, NSTrackingArea;
@protocol KHGridViewDelegate, KHEditorLayoutProtocol;

@interface KHGridViewCell : UXCollectionViewCell {
    NSTrackingArea *_trackingArea;
    UXView *_backgroundView;
    char _isRootCellClass;
    char _mouseInView;
}

@property (retain, nonatomic) UXView *backgroundView;
@property (retain, nonatomic) UXView *selectedBackgroundView;
@property (retain, nonatomic) UXView *hoverBackgroundView;
@property (retain, nonatomic) UXView *selectedHoverBackgroundView;
@property (readonly, nonatomic) UXView *uxContentView;
@property (readonly, nonatomic) UXImageView *layoutImageView;
@property (retain, nonatomic) id<KHEditorLayoutProtocol> layoutObject;
@property (readonly, nonatomic) id<KHGridViewDelegate> gridViewDelegate;
@property (readonly, nonatomic) UXCollectionView *collectionView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (char)accessibilityPerformShowMenu;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setSelected:(char)a0;
- (void)updateTrackingAreas;
- (char)wantsShadow;
- (void)_hideHoverState;
- (unsigned long long)trackingOptions;
- (void)didHideHoverState;
- (void)didShowHoverState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hoverStateTrackingRect;
- (double)selectedZPosition;
- (double)unselectedZPosition;
- (void)updateZPostion;

@end
