@class VisualScrubberItemView;

@interface _VisualScrubberItemViewAccessibilityWrapper : NSView

@property (readonly, weak, nonatomic) VisualScrubberItemView *parentItemView;

- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityRoleDescription;
- (id)initWithVisualScrubberItemView:(id)a0;

@end
