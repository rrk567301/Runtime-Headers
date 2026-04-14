@class _ISAnimatedImageTimerForwardingProxy, CADisplayLink;

@interface ISAnimatedImageTimer : ISObservable {
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;

+ (id)sharedTimer;

- (void)dealloc;
- (id)init;
- (void)_updateDisplayLink;
- (void).cxx_destruct;
- (void)_animationTimerFired:(id)a0;
- (void)_fireTimerWithInterval:(double)a0;
- (void)_iosUpdateDisplayLink;
- (void)hasObserversDidChange;
- (id)mutableChangeObject;

@end
