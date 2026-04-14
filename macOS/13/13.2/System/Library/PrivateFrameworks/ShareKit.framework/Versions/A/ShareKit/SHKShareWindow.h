@interface SHKShareWindow : NSPanel

@property BOOL isClosing;

- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)display;
- (BOOL)isMovableByWindowBackground;
- (void)displayIfNeeded;
- (void)_close;
- (BOOL)hidesOnDeactivate;

@end
