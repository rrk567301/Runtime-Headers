@protocol UINSAppKitTerminationControllerDelegate;

@interface UINSAppKitTerminationController : NSObject

@property (nonatomic) char isLaunchComplete;
@property (nonatomic) char isTerminatingNSApplication;
@property (nonatomic) char isTerminationCancelable;
@property (nonatomic) char isTerminationQuitAndCloseAllWindows;
@property (nonatomic) char isTerminationExplicit;
@property (nonatomic) char wasTerminationRequestedBeforeLaunchCompletion;
@property (nonatomic) char shouldExpediteNextTermination;
@property (nonatomic) char expeditingCanBeTakenBack;
@property (nonatomic) char showedAlertForWindowSizePrefsChange;
@property (nonatomic) char isWaitingForTerminationReply;
@property (nonatomic) char didSetupKVO;
@property (weak, nonatomic) id<UINSAppKitTerminationControllerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_installAppVolumeUnmountObserver;
- (void)_markNextTerminationAsExpeditedNotification:(id)a0;
- (void)_markNextTerminationAsNonExpeditedNotification:(id)a0;
- (void)_resumeAppTerminationAfterLaunch:(id)a0;
- (void)_scheduleAppRelaunchAfterTermination;
- (void)_terminateAndRelaunchNow;
- (void)_uninstallAppVolumeUnmountObserver;
- (unsigned long long)appShouldTerminate;
- (void)cancelAppKitTerminationIfNecessary;
- (void)finishAppKitTerminationOrExit;
- (char)launchingDidComplete;
- (void)markAppKitTerminationSuccessfullyAborted;
- (void)uiKitWantsToTerminateProcessExplicitly;

@end
