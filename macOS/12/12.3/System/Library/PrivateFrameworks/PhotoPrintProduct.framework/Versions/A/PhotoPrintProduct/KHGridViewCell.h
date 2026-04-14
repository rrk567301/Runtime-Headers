@class UXView, UXCollectionView, UXImageView, NSTrackingArea;
@protocol KHGridViewDelegate, KHEditorLayoutProtocol;

@interface KHGridViewCell : UXCollectionViewCell {
    NSTrackingArea *_trackingArea;
    UXView *_backgroundView;
    BOOL _isRootCellClass;
    BOOL _mouseInView;
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
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)accessibilityPerformShowMenu;
- (void)updateTrackingAreas;
- (void)setSelected:(BOOL)a0;
- (BOOL)wantsShadow;
- (unsigned long long)trackingOptions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hoverStateTrackingRect;
- (void)updateZPostion;
- (double)unselectedZPosition;
- (double)selectedZPosition;
- (void)didShowHoverState;
- (void)didHideHoverState;
- (void)_hideHoverState;

@end
