@class NSView, NSLayoutConstraint;

@interface LAUIShakeAnimation : NSAnimation {
    NSView *_targetView;
    NSLayoutConstraint *_centerXConstraint;
    double _amplitude;
}

- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (void)shake;
- (id)initWithTargetView:(id)a0 centerXConstraint:(id)a1;

@end
