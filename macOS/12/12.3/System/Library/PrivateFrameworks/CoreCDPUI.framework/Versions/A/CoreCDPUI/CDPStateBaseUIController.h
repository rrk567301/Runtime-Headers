@class CDPRecoveryKeySheetController, CDPOption, NSImage, CDPEnrollViewController, NSView, NSString, NSWindow;

@interface CDPStateBaseUIController : NSObject <CDPStateUIProvider>

@property (retain, nonatomic) CDPRecoveryKeySheetController *recoveryKeyController;
@property (retain, nonatomic) CDPOption *cdpOptionViewController;
@property (retain, nonatomic) NSWindow *parentWindow;
@property (retain, nonatomic) NSImage *displayImage;
@property (retain, nonatomic) CDPEnrollViewController *cdpViewController;
@property (nonatomic) BOOL viewBasedUI;
@property (retain, nonatomic) NSView *hostView;
@property (retain, nonatomic) NSView *iCDPContainerView;
@property (retain, nonatomic) NSView *iCDPContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endCDPView;
- (void)cdpContext:(id)a0 presentRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithSecretValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 beginRemoteApprovalWithValidator:(id)a1;
- (void)cdpContext:(id)a0 showError:(id)a1 withCompletion:(id /* block */)a2;
- (void)cdpContext:(id)a0 showError:(id)a1 withDefaultIndex:(long long)a2 withCompletion:(id /* block */)a3;
- (id)initWithParentWindow:(id)a0;
- (void)generateNewRecoveryKey:(id /* block */)a0;
- (void)changeView:(id)a0;

@end
