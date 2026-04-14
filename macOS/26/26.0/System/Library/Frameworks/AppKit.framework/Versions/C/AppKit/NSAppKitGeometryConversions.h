@interface NSAppKitGeometryConversions : NSObject

@property (class, nonatomic, readonly) NSAppKitGeometryConversions *defaultConversions;

- (id)init;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromWindow:(id)a1 toView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromScreenToWindow:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1 toWindow:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWindowToScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromScreenToView:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromScreenToWindow:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1 toView:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromViewToScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromWindow:(id)a1 toWindow:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromWindowToScreen:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromScreenToView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1 toView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1 toWindow:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromViewToScreen:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWindow:(id)a1 toView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWindow:(id)a1 toWindow:(id)a2;

@end
