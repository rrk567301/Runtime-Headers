@class NSView;

@interface NSUICollectionViewCell : NSUICollectionReusableView

@property (readonly, nonatomic) NSView *contentView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (id)accessibilitySelectedAttribute;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_gksetContentViewBackgroundColor:(id)a0;

@end
