@class NSString, OBTemplateView, OBPrivacyLinkController, NSObject;
@protocol OS_os_log;

@interface BKUISetupAssistantFingerprintEnrollClientController : BKUIFingerprintEnrollViewController <BKUITouchBarDelegate> {
    NSObject<OS_os_log> *bkui_controller_log_subsystem;
}

@property (retain) OBTemplateView *tutorialTemplateView;
@property (retain) OBTemplateView *enrollTemplateView;
@property (retain) OBPrivacyLinkController *privacyLinkVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (void)encodeWithCoder:(id)a0;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (id)templateView;
- (void)_postAccessibilityNotificationWithMessage:(id)a0;
- (void)_startTutorial:(BOOL)a0;
- (void)_failEnroll;
- (void)_sendEnrollResult:(int)a0 identity:(id)a1;
- (void)_setCurrentPrompt:(id)a0;
- (void)_setCurrentTitle:(id)a0;
- (void)_setTutorHidden:(BOOL)a0;
- (void)displaySecureIntentView:(id)a0;
- (void)postAccessibilityNotificationWithMessage:(id)a0;
- (void)removeSecureIntentView:(id)a0 didSucceed:(BOOL)a1 wasCancelled:(BOOL)a2;
- (id)securePairingStateObserver;
- (void)setupEnrollTemplateForBuddy;
- (void)setupPrivacyLink;
- (void)touchBarButtonPressed:(int)a0;

@end
