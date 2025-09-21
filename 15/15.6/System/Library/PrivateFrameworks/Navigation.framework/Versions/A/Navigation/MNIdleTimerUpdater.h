@class NSString, NSTimer, MNNavigationSessionState;
@protocol MNIdleTimerUpdaterDelegate;

@interface MNIdleTimerUpdater : NSObject <MNNavigationSessionStateListener> {
    char _isStarted;
    char _isArrived;
    NSTimer *_notMovingTimer;
    char _shouldEnableIdleTimer;
}

@property (weak, nonatomic) id<MNIdleTimerUpdaterDelegate> delegate;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_shouldEnableIdleTimerForArrivalState:(long long)a0;
- (void)_updateForLocation:(id)a0;
- (void)_updateShouldEnableIdleTimer:(char)a0;
- (void)updateForStartNavigation;

@end
