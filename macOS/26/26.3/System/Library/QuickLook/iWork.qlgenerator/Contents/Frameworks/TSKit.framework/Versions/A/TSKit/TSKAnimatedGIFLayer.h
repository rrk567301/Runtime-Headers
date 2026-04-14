@class TSKAnimatedGIFController;

@interface TSKAnimatedGIFLayer : CALayer {
    TSKAnimatedGIFController *mController;
}

@property (weak, nonatomic) TSKAnimatedGIFController *controller;

+ (id)defaultActionForKey:(id)a0;

- (void)display;
- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;

@end
