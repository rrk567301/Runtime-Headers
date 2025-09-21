@class NSView;

@interface UXCollectionViewCell : UXCollectionReusableView

@property (readonly, nonatomic) NSView *contentView;
@property (nonatomic, getter=isSelected) char selected;
@property (nonatomic) char selectionBorderShouldUsePrimaryColor;
@property (nonatomic, getter=isHighlighted) char highlighted;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (char)isAccessibilitySelectorAllowed:(SEL)a0;
- (id)_accessibilityIndexPath;
- (void)_setSelected:(char)a0 animated:(char)a1;
- (char)accessibilityPerformPress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilitySelected;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAccessibilitySelected:(char)a0;
- (char)wantsUpdateLayer;
- (id)_accessibilityDefaultRole;
- (void)_axPerformDoubleClick;
- (id)_axSimulateClick:(unsigned long long)a0 withNumberOfClicks:(unsigned long long)a1;
- (id)_dynamicAccessibilityParent;

@end
