@interface AXSSAddRemoveBar : NSSegmentedControl

+ (Class)cellClass;

- (void)awakeFromNib;
- (char)isConfigEnabled;
- (char)isRemoveEnabled;
- (char)isAddEnabled;
- (char)isAddSelected;
- (char)isConfigSelected;
- (char)isRemoveSelected;
- (void)setAddEnabled:(char)a0;
- (void)setConfigEnabled:(char)a0;
- (void)setRemoveEnabled:(char)a0;
- (void)setAddSegmentAccessibilityDescription:(id)a0;
- (void)setConfigSegmentAccessibilityDescription:(id)a0;
- (void)setRemoveSegmentAccessibilityDescription:(id)a0;

@end
