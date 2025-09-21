@class CALayer, LACUIPackagedViewStateController;

@interface LACUIPackagedView : NSView {
    LACUIPackagedViewStateController *_stateController;
}

@property (retain, nonatomic) CALayer *rootLayer;
@property (nonatomic) BOOL setInitialStateWhenMovedToWindow;

- (void)layout;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })convertPointToSublayerCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromSublayerCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setStateNamed:(id)a0 animated:(BOOL)a1;
- (void)setStateNamed:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
