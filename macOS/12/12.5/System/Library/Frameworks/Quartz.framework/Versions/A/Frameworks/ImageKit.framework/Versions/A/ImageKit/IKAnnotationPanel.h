@interface IKAnnotationPanel : NSPanel

- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)resignKeyWindow;
- (void)resignMainWindow;
- (void)closeDown;

@end
