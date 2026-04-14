@class NSProgressIndicator, NSTextField, NSArray, NSBox, NSMutableDictionary, NSPopUpButton, AMSUISpyglassPurchasesAccount, NSButton, NSSegmentedControl;
@protocol AMSUISpyglassPurchasesHeaderViewDelegate;

@interface AMSUISpyglassPurchasesHeaderView : NSView

@property (retain) AMSUISpyglassPurchasesAccount *currentAccount;
@property (retain) NSArray *accounts;
@property (retain) NSMutableDictionary *accountsDict;
@property unsigned long long splitType;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSSegmentedControl *segmentedControl;
@property (retain) NSPopUpButton *accountPopUpButton;
@property (retain) NSTextField *accountLabel;
@property (retain) NSBox *divider;
@property (retain) NSButton *manageButton;
@property BOOL showPayments;
@property (weak) id<AMSUISpyglassPurchasesHeaderViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)_configureSegmentedControl;
- (void)reloadAccounts;
- (void)setLoading:(BOOL)a0;
- (void)_accountChanged:(id)a0;
- (void)_configure;
- (void)_configureDivider;
- (void)_manageButtonPressed:(id)a0;
- (void)_segmentedControlValueChanged:(id)a0;
- (id)initWithDelegate:(id)a0 shouldShowPayments:(BOOL)a1;
- (void)_buildAccountList;
- (void)_configureAccountLabel:(id)a0;
- (void)_configureManageButton;
- (void)_configureAccountPopup;
- (id)_createDisplayName:(id)a0;
- (void)_switchAccount:(id)a0;
- (void)_clearCurrentAccountIfNeeded;

@end
