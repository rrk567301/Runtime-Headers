@class NSColor, LACUIPackagedView, CAShapeLayer;

@interface LACUILockView : NSView {
    CAShapeLayer *_shackle;
    CAShapeLayer *_body;
    LACUIPackagedView *_packagedView;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSColor *color;

- (void)_setup;
- (void).cxx_destruct;
- (id)init;

@end
