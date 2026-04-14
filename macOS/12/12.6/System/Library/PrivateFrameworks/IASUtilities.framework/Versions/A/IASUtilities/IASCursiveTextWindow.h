@interface IASCursiveTextWindow : NSWindow

- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)initWithScreen:(id)a0;
- (BOOL)ignoresMouseEvents;
- (BOOL)canBecomeVisibleWithoutLogin;

@end
