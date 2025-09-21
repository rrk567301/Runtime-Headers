@interface MKPlaceSectionRowView : MKPlaceSectionItemView

@property (nonatomic, getter=isSelected) char selected;
@property (nonatomic, getter=isHighlighted) char highlighted;

- (void)_updateBackgroundColor:(char)a0;
- (void)setHighlighted:(char)a0 animated:(char)a1;
- (void)setSelected:(char)a0 animated:(char)a1;

@end
