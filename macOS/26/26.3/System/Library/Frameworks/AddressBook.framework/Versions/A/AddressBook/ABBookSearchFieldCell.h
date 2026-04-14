@class NSProgressIndicator;

@interface ABBookSearchFieldCell : NSSearchFieldCell

@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (nonatomic) BOOL showsProgress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelButtonRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
