@class NSTimer, NSString, BKUIFingerSecurePairingStateObserver, BKUIMagicKeyBoardClientAdapterController, BKUISystemPrefsPairingView, BKMesaSecureIntentProvider, NSWindow, NSObject;
@protocol BKUIMagicKeyboardEnrollmentPrepUIDelegate, OS_os_log;

@interface BKUIMagicKeyboardEnrollmentPrepUIController : NSObject <BKSecureIntentDisplayHost> {
    NSObject<OS_os_log> *MagicKeyBoardEnrollmentPrepLogs;
    BOOL _screenLockBlocked;
}

@property (weak, nonatomic) NSWindow *alertWindow;
@property (retain) BKUIFingerSecurePairingStateObserver *securePairingStateObserver;
@property (retain) BKUISystemPrefsPairingView *pairingView;
@property (retain) BKMesaSecureIntentProvider *secureIntentProvider;
@property (retain) BKUIMagicKeyBoardClientAdapterController *clienPairingUIAdapterController;
@property (retain) BKUIMagicKeyBoardClientAdapterController *clienSIUIAdapterController;
@property (retain) NSTimer *displayLockAssertionTimer;
@property (weak, nonatomic) id<BKUIMagicKeyboardEnrollmentPrepUIDelegate> uiDelegate;
@property BOOL inBuddy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeSecureIntentView:(id)a0 didSucceed:(BOOL)a1 wasCancelled:(BOOL)a2;
- (void)displaySecureIntentView:(id)a0;
- (void)_cleanupScreenLock;
- (void)_updateSecurePairingUI;
- (void)_preemptiveSecureIntentRequest;
- (void)_blockScreenLock;
- (id)_lockScreenFormattedErrorForError:(long long)a0;
- (BOOL)shouldContinueDisplayingSecureIntentView;
- (void)startMagicKeyboardPreEnrollmentSetup;
- (void)_safeRemoveViewController:(id)a0;
- (void)failSetupDueToClamShell;
- (void)_safeShowViewController:(id)a0;
- (void)cleanUP;
- (id)initWithUIDelegate:(id)a0 alertParentWindow:(id)a1;

@end
