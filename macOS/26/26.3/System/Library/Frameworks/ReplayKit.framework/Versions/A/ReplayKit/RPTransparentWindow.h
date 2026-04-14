@interface RPTransparentWindow : NSWindow

- (BOOL)canBecomeKeyWindow;
- (BOOL)isOpaque;
- (id)backgroundColor;

@end
