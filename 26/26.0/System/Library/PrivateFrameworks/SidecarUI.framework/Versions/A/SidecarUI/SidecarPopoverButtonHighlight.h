@interface SidecarPopoverButtonHighlight : NSView

- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
