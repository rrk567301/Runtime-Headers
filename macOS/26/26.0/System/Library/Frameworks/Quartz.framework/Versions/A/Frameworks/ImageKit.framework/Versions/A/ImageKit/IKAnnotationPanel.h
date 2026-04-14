@interface IKAnnotationPanel : NSPanel

- (BOOL)canBecomeKeyWindow;
- (void)resignKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)resignMainWindow;
- (void)closeDown;

@end
