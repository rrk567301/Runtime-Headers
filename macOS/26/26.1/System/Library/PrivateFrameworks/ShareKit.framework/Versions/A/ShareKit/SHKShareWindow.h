@interface SHKShareWindow : NSPanel

@property BOOL isClosing;

- (void)_close;
- (BOOL)canBecomeKeyWindow;
- (void)displayIfNeeded;
- (void)display;
- (BOOL)canBecomeMainWindow;
- (BOOL)hidesOnDeactivate;
- (BOOL)isMovableByWindowBackground;

@end
