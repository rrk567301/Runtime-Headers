@interface SidecarPopoverButtonHighlight : NSView

- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)wantsLayer;

@end
