@interface ABNoWindowDragTextField : NSTextField

@property (nonatomic) char forceNonVibrant;

- (char)allowsVibrancy;
- (char)mouseDownCanMoveWindow;

@end
