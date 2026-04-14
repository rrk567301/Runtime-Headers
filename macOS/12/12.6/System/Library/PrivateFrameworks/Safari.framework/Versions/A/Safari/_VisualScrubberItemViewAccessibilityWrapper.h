@class VisualScrubberItemView;

@interface _VisualScrubberItemViewAccessibilityWrapper : NSView

@property (readonly, weak, nonatomic) VisualScrubberItemView *parentItemView;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRoleDescription;
- (id)initWithVisualScrubberItemView:(id)a0;

@end
