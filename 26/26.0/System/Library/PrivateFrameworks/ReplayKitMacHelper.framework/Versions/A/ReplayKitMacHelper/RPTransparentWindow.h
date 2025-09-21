@interface RPTransparentWindow : NSWindow

- (BOOL)isOpaque;
- (id)backgroundColor;
- (BOOL)canBecomeKeyWindow;

@end
