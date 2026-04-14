@class _ISAnimatedImageTimerForwardingProxy, CADisplayLink;

@interface ISAnimatedImageTimer : ISObservable {
    CADisplayLink *_displayLink;
    _ISAnimatedImageTimerForwardingProxy *_displayLinkProxy;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;

+ (id)sharedTimer;

- (id)init;
- (void)_updateDisplayLink;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_animationTimerFired:(id)a0;
- (void)_fireTimerWithInterval:(double)a0;
- (void)_iosUpdateDisplayLink;
- (void)hasObserversDidChange;
- (id)mutableChangeObject;

@end
