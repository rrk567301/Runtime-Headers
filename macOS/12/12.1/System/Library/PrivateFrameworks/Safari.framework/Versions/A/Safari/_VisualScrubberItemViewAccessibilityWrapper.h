@class VisualScrubberItemView;
@protocol VisualScrubberItemViewAccessibilityDelegate;

@interface _VisualScrubberItemViewAccessibilityWrapper : NSView

@property (weak, nonatomic) id<VisualScrubberItemViewAccessibilityDelegate> accessibilityDelegate;
@property (readonly, weak, nonatomic) VisualScrubberItemView *parentItemView;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (id)initWithVisualScrubberItemView:(id)a0;

@end
