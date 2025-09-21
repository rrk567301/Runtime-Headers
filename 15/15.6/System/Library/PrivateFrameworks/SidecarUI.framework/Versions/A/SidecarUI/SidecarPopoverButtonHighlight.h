@interface SidecarPopoverButtonHighlight : NSView

- (char)allowsVibrancy;
- (void)updateLayer;
- (char)wantsLayer;
- (char)wantsUpdateLayer;

@end
