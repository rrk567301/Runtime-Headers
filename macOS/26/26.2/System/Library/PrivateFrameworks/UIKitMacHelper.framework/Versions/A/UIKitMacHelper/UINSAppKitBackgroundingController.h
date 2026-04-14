@class NSRunningApplication;
@protocol UINSAppKitBackgroundingControllerDelegate;

@interface UINSAppKitBackgroundingController : NSObject

@property (retain, nonatomic) NSRunningApplication *_observedRunningApplication;
@property (nonatomic, getter=isAppKitHidden) BOOL appKitHidden;
@property (nonatomic, getter=isAppKitBackground) BOOL appKitBackground;
@property (weak, nonatomic) id<UINSAppKitBackgroundingControllerDelegate> delegate;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_stopObserving;
- (id)init;
- (void)_startObserving;
- (void)dealloc;
- (BOOL)_becomeBackgroundIfNecessary;
- (BOOL)_becomeForegroundIfNecessary;
- (void)_macOSAppActivationPolicyChangedToBackgroundOnly;
- (void)_macOSAppActivationPolicyChangedToForeground;
- (void)_macOSAppDidBecomeActive:(id)a0;
- (void)_macOSAppDidHide:(id)a0;
- (void)_setLSNextAppLaunchDelay;
- (void)_setLSRestoreTypeToForeground:(BOOL)a0;
- (BOOL)makeAppKitBackground;
- (BOOL)makeAppKitBackgroundAndHold;
- (BOOL)makeAppKitForeground;

@end
