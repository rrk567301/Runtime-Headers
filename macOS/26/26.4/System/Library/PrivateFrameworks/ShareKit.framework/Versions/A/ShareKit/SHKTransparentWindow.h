@interface SHKTransparentWindow : NSWindow

- (BOOL)isOpaque;
- (BOOL)canBecomeKeyWindow;
- (id)backgroundColor;

@end
