@interface SHKShareWindow : NSPanel

@property BOOL isClosing;

- (void)display;
- (void)displayIfNeeded;
- (void)_close;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)hidesOnDeactivate;
- (BOOL)isMovableByWindowBackground;

@end
