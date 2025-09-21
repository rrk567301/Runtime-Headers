@interface WebControlWindow : NSWindow

@property (class) char hasKeyAppearance;

- (char)_needsToResetDragMargins;
- (void)_setNeedsToResetDragMargins:(char)a0;
- (char)hasKeyAppearance;
- (char)isKeyWindow;

@end
