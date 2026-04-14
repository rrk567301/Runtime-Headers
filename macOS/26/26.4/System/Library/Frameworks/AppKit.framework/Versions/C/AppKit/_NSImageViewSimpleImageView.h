@class NSImageView;

@interface _NSImageViewSimpleImageView : _NSSimpleImageView {
    NSImageView *_ownerView;
}

- (id)image;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)iconAppearanceConfiguration;
- (id)imageContentStyle;
- (id)initWithOwnerView:(id)a0;
- (long long)userInterfaceLayoutDirection;

@end
