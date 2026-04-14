@class NSTextField, NSBox, NSArray, NSProgressIndicator, NSButton, AMSUISpyglassPurchasesAccount;
@protocol AMSUISpyglassPurchasesAccountViewDelegate;

@interface AMSUISpyglassPurchasesAccountView : NSView

@property (retain) AMSUISpyglassPurchasesAccount *currentAccount;
@property (weak) id<AMSUISpyglassPurchasesAccountViewDelegate> delegate;
@property (retain) NSBox *divider;
@property (retain) NSTextField *enableTouchIdLabel;
@property (retain) NSArray *freeDownloadsButtons;
@property (retain) NSTextField *freeDownloadsLabel;
@property (retain) NSButton *freeDownloadsRequireButton;
@property (retain) NSButton *freeDownloadsSaveButton;
@property (retain) NSButton *purchasesAfterButton;
@property (retain) NSButton *purchasesAlwaysButton;
@property (retain) NSButton *purchasesNeverButton;
@property (retain) NSArray *purchasesButtons;
@property (retain) NSTextField *purchasesLabel;
@property (retain) NSTextField *requirePasswordLabel;
@property (retain) NSProgressIndicator *spinner;
@property (retain) NSButton *touchIdButton;
@property (retain) NSTextField *subscriptionsLabel;
@property (retain) NSButton *subscriptionsButton;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithDelegate:(id)a0;
- (BOOL)isFlipped;
- (void)reload;
- (void)setLoading:(BOOL)a0;
- (void)touchIdButtonToggled:(id)a0;
- (void)freeDownloadsToggled:(id)a0;
- (void)purchasesToggled:(id)a0;
- (void)_manageSubscriptionsPressed:(id)a0;
- (void)_configureTouchIDToggle;
- (void)_setPasswordButtonsEnabled:(BOOL)a0;
- (void)_configurePasswordLabel;
- (void)_configurePasswordRadios;
- (void)_configureFooter;
- (void)_configureTouchIdNotification;
- (void)_configureDivider;
- (void)changeAccount:(id)a0;
- (void)syncPasswordSettings;

@end
