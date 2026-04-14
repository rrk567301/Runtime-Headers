@class NSArray;

@interface ACSHResizeHandlesView : ACSHView

@property (retain, nonatomic) NSArray *_resizeHandles;

+ (void)initialize;
+ (double)handleSize;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)suspendTracking;
- (void)initView;
- (long long)resizeTypeForView:(id)a0;
- (void)resumeTracking;

@end
