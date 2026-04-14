@class NSColor, LACUIPackagedView, CAShapeLayer;

@interface LACUILockView : NSView {
    CAShapeLayer *_shackle;
    CAShapeLayer *_body;
    LACUIPackagedView *_packagedView;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSColor *color;

- (void)_setup;
- (id)init;
- (void).cxx_destruct;

@end
