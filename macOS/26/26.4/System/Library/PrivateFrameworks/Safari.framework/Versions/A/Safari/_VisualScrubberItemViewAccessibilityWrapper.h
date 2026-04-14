@class VisualScrubberItemView;

@interface _VisualScrubberItemViewAccessibilityWrapper : NSView

@property (readonly, weak, nonatomic) VisualScrubberItemView *parentItemView;

- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (id)accessibilityRoleDescription;
- (id)initWithVisualScrubberItemView:(id)a0;

@end
