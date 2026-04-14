@class NSImageView;

@interface StrongPasswordOptionsMenuItemView : SafeAutoFillChoicesMenuItemView {
    long long _state;
}

@property (weak, nonatomic) NSImageView *imageView;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_menuItemOnStateImage;
- (id)_menuItemMixedStateImage;

@end
