@class KHLayout;

@interface KHDrawingLayoutView : UXView

@property double gutterOverlap;
@property BOOL backgroundDisabled;
@property (retain, nonatomic) KHLayout *layoutObject;

- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
