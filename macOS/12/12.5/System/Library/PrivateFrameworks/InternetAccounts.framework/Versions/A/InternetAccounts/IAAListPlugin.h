@class NSView, IAAppTableController, NSArray, IASheetMorpher, NSTextField, IAAccount, NSDictionary, IAAppCheckboxMatrixController, NSButton, NSImageView, NSPrefCrossFadeWindow;

@interface IAAListPlugin : IAPlugin <IAAppTableControllerDelegateProtocol> {
    IAAppTableController *_appTableController;
    IAAppCheckboxMatrixController *_appCheckboxMatrixController;
    IAAccount *_provisionalAccount;
    IASheetMorpher *_sheetMorpher;
    NSPrefCrossFadeWindow *_hostSheet;
    NSDictionary *_cachedDomains;
    NSArray *_topLevelObjects;
    NSArray *_appSelectionPanelNibObjects;
    NSView *_validationView;
    NSView *_appSelectionView;
    NSView *_appTableContainer;
    NSTextField *_appSelectionAccountName;
    NSButton *_appSelectionOKButton;
    NSImageView *_appSelectionImage;
}

@property unsigned long long style;

- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)cancel:(id)a0;
- (BOOL)supportsDomain:(id)a0;
- (id)domains;
- (void)addAccount:(id)a0;
- (id)defaultAccountDescription;
- (BOOL)supportsDataMigration;
- (id)brandName;
- (id)signInView;
- (id)supportURL;
- (void)help:(id)a0;
- (id)badgeImage;
- (id)bannerImage;
- (id)bannerImageLarge;
- (id)imageForAccount:(id)a0;
- (id)accountDescriptionForSettings:(id)a0;
- (void)showView:(id)a0 animate:(BOOL)a1;
- (id)_currentAppTableController;
- (id)autodiscoverDomainForService:(id)a0 options:(id)a1;
- (BOOL)appToggle:(id)a0;
- (void)showValidationPanel:(BOOL)a0;
- (void)showAppSelectionPanel:(BOOL)a0;
- (void)configViewWillLoad;
- (void)configViewDidLoad;
- (void)setEnabled:(BOOL)a0 application:(id)a1 account:(id)a2 inWindow:(id)a3;
- (BOOL)canSignOutForAccount:(id)a0;
- (void)createAccountInWindow:(id)a0;
- (void)createAccountInWindow:(id)a0 withSafariArgs:(id)a1;
- (void)signInAccount:(id)a0 inWindow:(id)a1;
- (void)willDeleteAccount:(id)a0;
- (void)didDeleteAccount:(id)a0;
- (id)accountFromSettings:(id)a0;
- (id)userNameFieldLabel;
- (id)autodiscoverDomain;
- (id)autodiscoverDomainForService:(id)a0;
- (BOOL)shouldShowPasswordField;
- (id)serviceDisplayNameForService:(id)a0;
- (id)displayNameForApplication:(id)a0;
- (id)detailsUIControllerClassName;
- (BOOL)shouldShowMigrationSyncAlertForService:(id)a0;
- (BOOL)showMigrationSyncAlertForService:(id)a0;
- (unsigned long long)displayTypeForRegion:(id)a0;
- (void)prepAppSelectionPanel;
- (id)accessoryViewForAccount:(id)a0;
- (void)accountWasSelected:(id)a0;
- (void)accountWasDeselected:(id)a0;
- (void)continueButton:(id)a0;
- (void)back:(id)a0;

@end
