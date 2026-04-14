@interface EditorWindowRelocateAnimation : NSAnimation

@property struct CGPoint { double x; double y; } startPoint;
@property struct CGPoint { double x; double y; } endPoint;

- (void)setCurrentProgress:(float)a0;
- (id)init;

@end
