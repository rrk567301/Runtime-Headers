@interface SHKShareWindow : NSPanel

@property char isClosing;

- (void)display;
- (void)displayIfNeeded;
- (void)_close;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (char)hidesOnDeactivate;
- (char)isMovableByWindowBackground;

@end
