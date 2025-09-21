@class VisualScrubberItemView;

@interface _VisualScrubberItemViewAccessibilityWrapper : NSView

@property (readonly, weak, nonatomic) VisualScrubberItemView *parentItemView;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (char)isAccessibilityElement;
- (id)initWithVisualScrubberItemView:(id)a0;

@end
