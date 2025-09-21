@class NSNumber;
@protocol SUICAutoDismissalStrategyDelegate;

@interface SUICAutoDismissalStrategy : NSObject {
    NSNumber *_lastShouldDismissValue;
}

@property (nonatomic) long long autoDismissalReason;
@property (readonly, nonatomic) double idleTimeout;
@property (readonly, nonatomic) double extendedIdleTimeout;
@property (readonly, nonatomic) char deviceSupportsFaceDetection;
@property (readonly, nonatomic) char deviceSupportsRaiseGestureDetection;
@property (readonly, nonatomic) double viewRequiringExtendedTimeoutStartTime;
@property (weak, nonatomic) id<SUICAutoDismissalStrategyDelegate> delegate;
@property (nonatomic) char userInteractedWithTouchScreen;
@property (nonatomic) char userInteractedWithTouchIDSensor;
@property (nonatomic) long long latestFaceAwarenessEvent;
@property (nonatomic) long long latestDeviceMotionEvent;
@property (nonatomic, getter=isVideoPlaying) char videoPlaying;
@property (nonatomic, getter=isViewRequiringExtendedTimeoutVisible) char viewRequiringExtendedTimeoutVisible;
@property (nonatomic) double minimumIdleTimeInterval;
@property (readonly, nonatomic) double idleTimeInterval;
@property (readonly, nonatomic) char shouldDismiss;

- (void).cxx_destruct;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeeded;
- (void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeededPermanent:(char)a0;
- (id)initWithIdleTimeout:(double)a0 extendedIdleTimeout:(double)a1 deviceSupportsFaceDetection:(char)a2 deviceSupportsRaiseGestureDetection:(char)a3;
- (void)setViewRequiringExtendedTimeoutStartTime:(double)a0;

@end
