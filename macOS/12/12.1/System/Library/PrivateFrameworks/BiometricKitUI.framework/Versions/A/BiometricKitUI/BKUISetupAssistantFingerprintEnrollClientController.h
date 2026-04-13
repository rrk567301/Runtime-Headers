@class OBTemplateView, NSObject;
@protocol OS_os_log;

@interface BKUISetupAssistantFingerprintEnrollClientController : BKUIFingerprintEnrollViewController {
    NSObject<OS_os_log> *bkui_controller_log_subsystem;
}

@property (retain) OBTemplateView *tutorialTemplateView;
@property (retain) OBTemplateView *enrollTemplateView;

- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (id)templateView;
- (void)_postAccessibilityNotificationWithMessage:(id)a0;
- (void)setupEnrollTemplateForBuddy;
- (void)_setTutorHidden:(BOOL)a0;
- (void)_startTutorial:(BOOL)a0;
- (void)_failEnroll;
- (void)_sendEnrollResult:(int)a0 identity:(id)a1;
- (void)_setCurrentTitle:(id)a0;
- (void)_setCurrentPrompt:(id)a0;
- (void)displaySecureIntentView:(id)a0;
- (void)removeSecureIntentView:(id)a0 didSucceed:(BOOL)a1 wasCancelled:(BOOL)a2;
- (id)securePairingStateObserver;

@end
