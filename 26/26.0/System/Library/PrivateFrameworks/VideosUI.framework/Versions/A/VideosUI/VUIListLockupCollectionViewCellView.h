@class FocusableTextView, VUISeparatorView, NSView, VUILabel, VUIButton;

@interface VUIListLockupCollectionViewCellView : VUIBaseView

@property (retain, nonatomic) NSView *imageView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subTitleLabel;
@property (retain, nonatomic) FocusableTextView *descriptionTextView;
@property (retain, nonatomic) VUIButton *primaryButton;
@property (retain, nonatomic) VUIButton *secondaryButton;
@property (nonatomic) long long imagePosition;
@property (retain, nonatomic) VUISeparatorView *separatorView;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;

@end
