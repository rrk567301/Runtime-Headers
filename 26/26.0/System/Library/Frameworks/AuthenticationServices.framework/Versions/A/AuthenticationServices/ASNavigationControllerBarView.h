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

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_separatorView;
- (id)_newBarButtonItemsStackView;

@end
