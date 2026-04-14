@class CALayer, LACUIPackagedViewStateController;

@interface LACUIPackagedView : NSView {
    CALayer *_rootLayer;
    LACUIPackagedViewStateController *_stateController;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)layout;
- (void)setState:(id)a0 animated:(BOOL)a1;
- (void)setState:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
