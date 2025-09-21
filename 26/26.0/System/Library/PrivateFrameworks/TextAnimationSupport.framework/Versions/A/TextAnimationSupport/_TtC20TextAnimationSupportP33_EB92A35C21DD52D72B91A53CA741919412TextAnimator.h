@class NSString, NSDictionary;
@protocol _NSTextAnimatorStateSnapshot, _NSTextAnimation;

@interface _TtC20TextAnimationSupportP33_EB92A35C21DD52D72B91A53CA741919412TextAnimator : NSObject <_NSTextAnimator> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ textAnimation;
    void /* unknown type, empty encoding */ variant;
    void /* unknown type, empty encoding */ notify;
    void /* unknown type, empty encoding */ _phase;
    void /* unknown type, empty encoding */ _configuration;
}

@property (nonatomic, readonly) id<_NSTextAnimation> animation;
@property (nonatomic, readonly) double duration;
@property (nonatomic, copy) NSString *toPhase;
@property (nonatomic, readonly) NSString *fromPhase;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic, retain) id<_NSTextAnimatorStateSnapshot> stateSnapshot;
@property (nonatomic, readonly) double nextAnimationTriggerDelay;
@property (nonatomic) long long state;

- (void)pause;
- (void)start;
- (void)invalidate;
- (void)cancel;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (void)startWithDuration:(double)a0;

@end
