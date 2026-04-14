@interface RPTransparentWindow : NSWindow

- (BOOL)isOpaque;
- (BOOL)canBecomeKeyWindow;
- (id)backgroundColor;

@end
