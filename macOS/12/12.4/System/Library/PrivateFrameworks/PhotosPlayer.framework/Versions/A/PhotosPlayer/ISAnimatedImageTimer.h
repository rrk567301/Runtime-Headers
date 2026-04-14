@interface ISAnimatedImageTimer : ISObservable {
    struct __CVDisplayLink { } *_displayLink;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;

+ (id)sharedTimer;

- (void)dealloc;
- (id)init;
- (void)_updateDisplayLink;
- (id)mutableChangeObject;
- (void)hasObserversDidChange;
- (void)_fireTimerWithInterval:(double)a0;
- (void)_macosDealloc;
- (void)_macosUpdateDisplayLink;

@end
