@class NSTextField;

@interface SCNUIVector2TextField : SCNUIBindableView {
    NSTextField *tx;
    NSTextField *ty;
}

@property (nonatomic) struct CGSize { double x0; double x1; } vector2;

- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
