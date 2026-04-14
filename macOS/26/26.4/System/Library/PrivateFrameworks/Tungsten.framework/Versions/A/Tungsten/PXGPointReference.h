@class PXGLayout;

@interface PXGPointReference : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, weak, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) BOOL isValid;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 layout:(id)a1;

@end
