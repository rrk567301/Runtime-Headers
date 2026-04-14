@interface SHKTransparentWindow : NSWindow

- (BOOL)canBecomeKeyWindow;
- (BOOL)isOpaque;
- (id)backgroundColor;

@end
