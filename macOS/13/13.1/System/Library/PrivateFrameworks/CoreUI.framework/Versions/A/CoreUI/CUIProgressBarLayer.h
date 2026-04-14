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
- (id)_makePingPongIndicatorFillLayerAnimationGroup;
- (id)_makePingPongAnimation;
- (void)_switchToPingPong;
- (void)_updatePingPong;
- (void)_switchToPingPongFinishing;
- (void)_updatePingPongFinishing;
- (void)_switchToDeterminateAnimating;
- (void)_updateDeterminateAnimating;
- (void)_switchToDeterminate;
- (void)_updateIndicatorFillLayerGeometry;
- (void)_updateDeterminate;
- (void)_switchToPulsingStarting;
- (void)_updatePulsingStarting;
- (id)_makePulsingAnimation;
- (void)_switchToPulsing;
- (void)_updatePulsing;
- (void)_switchToPulsingFinishing;
- (void)_updatePulsingFinishing;

@end
