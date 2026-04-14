@class TSKAnimatedGIFController;

@interface TSKAnimatedGIFLayer : CALayer {
    TSKAnimatedGIFController *mController;
}

@property (weak, nonatomic) TSKAnimatedGIFController *controller;

+ (id)defaultActionForKey:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)display;
- (void)teardown;

@end
