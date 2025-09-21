@interface SHKShareWindow : NSPanel

@property BOOL isClosing;

- (void)_close;
- (void)displayIfNeeded;
- (void)display;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)hidesOnDeactivate;
- (BOOL)isMovableByWindowBackground;

@end
