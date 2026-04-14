@interface VUINoClickThroughView : NSView

- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilitySubrole;

@end
