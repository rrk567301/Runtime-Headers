@class VisualScrubberItemView;

@interface _VisualScrubberItemViewAccessibilityWrapper : NSView

@property (readonly, weak, nonatomic) VisualScrubberItemView *parentItemView;

- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityRoleDescription;
- (id)initWithVisualScrubberItemView:(id)a0;

@end
