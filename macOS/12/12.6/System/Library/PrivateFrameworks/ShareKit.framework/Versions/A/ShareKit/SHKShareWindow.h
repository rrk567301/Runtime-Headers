@interface SHKShareWindow : NSPanel

@property BOOL isClosing;

- (void)display;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)hidesOnDeactivate;
- (void)displayIfNeeded;
- (BOOL)isMovableByWindowBackground;
- (void)_close;

@end
