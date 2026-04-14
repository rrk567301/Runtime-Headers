@class NSArray, NSView, NSLayoutConstraint, NSStackView;

@interface ASNavigationControllerBarView : NSView {
    NSStackView *_containerStackView;
    NSStackView *_itemsStackView;
    NSView *_separatorView;
    NSLayoutConstraint *_separatorHeightConstraint;
}

@property (nonatomic) long long separatorPlacement;
@property (copy, nonatomic) NSArray *leadingViews;
@property (copy, nonatomic) NSArray *trailingViews;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_separatorView;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topPadding:(double)a1;
- (id)_newBarButtonItemsStackView;
- (id)initWithFrameForBottomBar:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
