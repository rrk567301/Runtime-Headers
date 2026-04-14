@class CALayer, NSString;

@interface CUIProgressBarLayer : CALayer <CAAnimationDelegate, CALayerDelegate> {
    long long _state;
    double _value;
    double _previousPresentedValue;
    double _presentedValue;
    double _animationBeginTime;
    NSString *_animationBeginTimeMode;
    float _animationRepeatCount;
    BOOL _rtl;
}

@property (nonatomic) double value;
@property (nonatomic, getter=isRTL) BOOL RTL;
@property (retain, nonatomic) CALayer *trackLayer;
@property (retain, nonatomic) CALayer *trackOutlineLayer;
@property (retain, nonatomic) CALayer *indicatorFillLayer;
@property (retain, nonatomic) CALayer *indicatorClipLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_update;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)_updateStateIfNeeded;
- (id)initWithLayer:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (id)initWithValue:(double)a0;
- (void)resizeSublayersWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateDeterminate;
- (void)_updatePingPong;
- (void)_updatePingPongFinishing;
- (void)_updateDeterminateAnimating;
- (void)_updatePulsingStarting;
- (void)_updatePulsing;
- (void)_updatePulsingFinishing;
- (id)_makePingPongIndicatorFillLayerAnimationGroup;
- (id)_makePingPongAnimation;
- (void)_updateIndicatorFillLayerGeometry;
- (id)_makePulsingAnimation;
- (void)_switchToPingPongFinishing;
- (void)_switchToPingPong;
- (void)_switchToPulsingStarting;
- (void)_switchToDeterminateAnimating;
- (void)_switchToPulsingFinishing;
- (void)_switchToDeterminate;
- (void)_switchToPulsing;

@end
