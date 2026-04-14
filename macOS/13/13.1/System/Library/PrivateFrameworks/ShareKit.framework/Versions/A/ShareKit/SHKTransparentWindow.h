@interface SHKTransparentWindow : NSWindow

- (BOOL)isOpaque;
- (id)backgroundColor;
- (BOOL)canBecomeKeyWindow;

@end
