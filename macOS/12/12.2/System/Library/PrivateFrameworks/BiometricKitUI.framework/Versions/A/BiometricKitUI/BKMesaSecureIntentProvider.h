@class NSString, LAContext, BKUIAlertView, NSView, NSObject, NSWindow;
@protocol BKSecureIntentDisplayHost, OS_os_log, SecureIntentClientView;

@interface BKMesaSecureIntentProvider : NSObject <LAUIDelegate> {
    NSObject<OS_os_log> *authManagerLogs;
    BOOL _authParamActive;
    BOOL _pushCredentialPresent;
    BOOL _hasAttemptedCrossMatch;
    BOOL _inBuddy;
    BOOL _touchIDMatch;
    unsigned long long _touchIDMatchAttemptCount;
    struct __IOHIDEventSystemClient { } *_hidClient;
}

@property (retain, nonatomic) NSString *credential;
@property (retain, nonatomic) LAContext *context;
@property (retain) BKUIAlertView *alertView;
@property (retain) BKUIAlertView *wrongButtonAlertView;
@property (retain, nonatomic) NSView<SecureIntentClientView> *presentingView;
@property (retain, nonatomic) NSWindow *alertWindow;
@property (weak, nonatomic) id<BKSecureIntentDisplayHost> displayHost;

- (void).cxx_destruct;
- (void)reset;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)_handleTouchIDEventWithParameters:(id)a0;
- (id)updateDFRWithFunctionBarController:(id)a0;
- (id)initWithAlertWindow:(id)a0 inBuddy:(BOOL)a1;
- (BOOL)needsToDisplayUI;
- (void)dismissSecureIntentViewForUserInteraction;
- (void)getSecureIntentForAccessory:(id)a0 enrollmentOperation:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_startMonitoringPowerButton;
- (void)_getSecureIntentForAccessory:(id)a0 enrollmentOperation:(id)a1 showErrorToRetry:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (BOOL)hasFingergprintsEnrolled;
- (void)_stopMonitoringPowerButton;
- (void)showAlert:(id)a0 detailedText:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)configureIntentView;
- (void)invalidateAuthContext;

@end
