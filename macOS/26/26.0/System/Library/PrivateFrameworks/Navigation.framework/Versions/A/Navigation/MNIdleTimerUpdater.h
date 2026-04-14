@class NSString, NSDictionary, MNDispatchTimer, MNNavigationSessionState;
@protocol MNIdleTimerUpdaterDelegate;

@interface MNIdleTimerUpdater : NSObject <MNNavigationSessionStateListener> {
    BOOL _isStarted;
    BOOL _isArrived;
    MNDispatchTimer *_notMovingTimer;
    BOOL _shouldEnableIdleTimer;
    NSDictionary *_speedThresholdsToConsiderStopped;
}

@property (weak, nonatomic) id<MNIdleTimerUpdaterDelegate> delegate;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldEnableIdleTimerForArrivalState:(long long)a0;
- (double)_speedThresholdForCurrentTransportType;
- (void)_updateForLocation:(id)a0;
- (void)_updateShouldEnableIdleTimer:(BOOL)a0;
- (void)updateForStartNavigation;

@end
