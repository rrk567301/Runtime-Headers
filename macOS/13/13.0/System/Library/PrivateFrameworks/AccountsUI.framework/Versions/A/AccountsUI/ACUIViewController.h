@class NSTextField, NSArray, ACUICertificatePanelManager, ACAccount;

@interface ACUIViewController : NSViewController

@property (retain) ACUICertificatePanelManager *certPanelMgr;
@property (retain) NSArray *uiDataclasses;
@property (retain) NSTextField *passwordField;
@property (retain) NSTextField *errorMessageLabel;
@property (nonatomic) BOOL disableAutoReload;
@property (readonly, nonatomic) ACAccount *account;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)nibBundle;
- (id)initWithAccount:(id)a0;
- (void)_setAccount:(id)a0;
- (void)_reloadAccountIfNeeded:(id)a0;
- (void)refreshDataclassesUI;
- (void)accountDidChangeFrom:(id)a0;
- (void)accountWillChangeTo:(id)a0;
- (void)persistVerifiedAccountWithActions:(id)a0;
- (void)saveAccount:(id)a0;
- (void)saveAccountWithVerificationOptions:(id)a0 dataclassActions:(id)a1;
- (BOOL)willSaveAccount;
- (BOOL)willPersistVerifiedAccount;
- (void)saveAccountSucceeded;
- (void)saveAccountFailedWithError:(id)a0;
- (BOOL)handleInsecureConnectionForAccount:(id)a0 withSaveError:(id)a1 inWindow:(id)a2;
- (void)digestSaveError:(id)a0 inWindow:(id)a1;
- (void)digestSaveError:(id)a0 inWindow:(id)a1 isSetup:(BOOL)a2;

@end
