@interface VUINoClickThroughView : NSView

- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilitySubrole;

@end
