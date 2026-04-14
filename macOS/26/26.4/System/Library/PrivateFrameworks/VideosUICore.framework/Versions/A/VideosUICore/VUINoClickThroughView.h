@interface VUINoClickThroughView : NSView

- (id)accessibilityRole;
- (void)mouseDown:(id)a0;
- (BOOL)isAccessibilityElement;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilitySubrole;

@end
