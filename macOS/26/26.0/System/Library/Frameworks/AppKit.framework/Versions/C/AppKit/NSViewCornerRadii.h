@class NSString;

@interface NSViewCornerRadii : NSObject

@property (class, readonly, copy) NSViewCornerRadii *zero;

@property (readonly) struct CACornerRadii { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; } caCornerRadii;
@property (readonly) BOOL isZero;
@property (readonly, copy) NSViewCornerRadii *_normalized;
@property double topLeft;
@property double topRight;
@property double bottomLeft;
@property double bottomRight;
@property (copy) NSString *cornerCurve;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRadius:(double)a0;
- (id)_subtracting:(id)a0;
- (id)initWithTopLeft:(double)a0 topRight:(double)a1 bottomLeft:(double)a2 bottomRight:(double)a3;
- (id)initWithTopLeft:(double)a0 topRight:(double)a1 bottomLeft:(double)a2 bottomRight:(double)a3 cornerCurve:(id)a4;

@end
