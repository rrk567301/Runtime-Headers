@interface SHKShareWindow : NSPanel

@property BOOL isClosing;

- (BOOL)canBecomeKeyWindow;
- (void)display;
- (void)_close;
- (void)displayIfNeeded;
- (BOOL)canBecomeMainWindow;
- (BOOL)hidesOnDeactivate;
- (BOOL)isMovableByWindowBackground;

@end
