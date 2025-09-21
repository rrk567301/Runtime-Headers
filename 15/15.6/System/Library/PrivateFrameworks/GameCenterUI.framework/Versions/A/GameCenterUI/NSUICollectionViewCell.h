@class NSView;

@interface NSUICollectionViewCell : NSUICollectionReusableView

@property (readonly, nonatomic) NSView *contentView;
@property (nonatomic, getter=isSelected) char selected;
@property (nonatomic, getter=isHighlighted) char highlighted;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)_setSelected:(char)a0 animated:(char)a1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsPositionAttributeSettable;
- (char)accessibilityIsSelectedAttributeSettable;
- (char)accessibilityIsSizeAttributeSettable;
- (id)accessibilitySelectedAttribute;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)wantsUpdateLayer;
- (void)_gksetContentViewBackgroundColor:(id)a0;

@end
