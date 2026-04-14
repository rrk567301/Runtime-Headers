@interface VUINSBarButtonFixedSpaceView : NSView

@property (nonatomic) double width;

- (id)initWithWidth:(double)a0;
- (struct CGSize { double x0; double x1; })fittingSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
