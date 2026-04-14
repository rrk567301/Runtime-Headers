@interface VFXAnimationEvent : NSObject {
    double _eventTime;
    id /* block */ _eventBlock;
}

+ (id)animationEventWithKeyTime:(float)a0 block:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (double)time;
- (void)setTime:(double)a0;
- (id /* block */)eventBlock;
- (void)setEventBlock:(id /* block */)a0;

@end
