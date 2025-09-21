@interface IKAnnotationPanel : NSPanel

- (void)resignKeyWindow;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (void)resignMainWindow;
- (void)closeDown;

@end
