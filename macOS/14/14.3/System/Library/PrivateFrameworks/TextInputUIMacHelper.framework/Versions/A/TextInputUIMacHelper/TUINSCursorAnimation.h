@interface TUINSCursorAnimation : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)animationsForStyle:(long long)a0 reveal:(BOOL)a1;
- (id)dismissAnimationsForStyle:(long long)a0;
- (id)resizeAnimationsFromOldSize:(struct CGSize { double x0; double x1; })a0;
- (id)revealAnimationsForStyle:(long long)a0;

@end
