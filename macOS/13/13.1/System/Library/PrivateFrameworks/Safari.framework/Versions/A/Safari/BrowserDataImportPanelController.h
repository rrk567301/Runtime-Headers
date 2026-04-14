@class NSTextField, NSImageView, BrowserDataDirectories, NSProgressIndicator, NSButton, NSStackView;

@interface BrowserDataImportPanelController : NSWindowController {
    BOOL _isBrowserProcessRunning;
    BOOL _hasImported;
    BOOL _isObservingRunningApplications;
}

@property (readonly, nonatomic) BrowserDataDirectories *browserDataDirectories;
@property (weak, nonatomic) NSTextField *titleTextField;
@property (weak, nonatomic) NSButton *importButton;
@property (weak, nonatomic) NSStackView *checkboxContainer;
@property (weak, nonatomic) NSImageView *icon;
@property (weak, nonatomic) NSTextField *additionalInfo;
@property (retain, nonatomic) NSButton *bookmarksCheckbox;
@property (retain, nonatomic) NSButton *historyCheckbox;
@property (retain, nonatomic) NSButton *passwordsCheckbox;
@property (weak) NSButton *okButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSProgressIndicator *progressIndicator;

+ (void)runModalPanelForBrowserDataDirectories:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)close:(id)a0;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)windowDidLoad;
- (id)_windowTitle;
- (void)importDidFinish:(id)a0;
- (id)_initWithBrowserDataDirectories:(id)a0;
- (void)checkboxToggled:(id)a0;
- (void)importClicked:(id)a0;
- (id)_importingTitleString;
- (id)_finishedImportTitleString;
- (void)_runModalSheet;
- (unsigned long long)_supportedImportDataTypes;
- (unsigned long long)_defaultSelectedDataTypes;
- (id)_checkboxesForDataTypes:(unsigned long long)a0;
- (id)_allCheckboxes;
- (id)_visibleCheckboxes;
- (id)_defaultSelectedCheckboxes;
- (void)_updateImportButtonEnabled;
- (void)_updateCheckboxVisibility;
- (unsigned long long)_selectedDataTypes;
- (void)_importFromBrowser;
- (BOOL)_isBrowserProcessInApplicationList:(id)a0;
- (void)_updateShowCloseBrowserSupportText;
- (void)_setImportingBrowserIcon;
- (BOOL)_isAnyCheckboxChecked;
- (BOOL)_checkboxIsAvailableAndChecked:(id)a0;
- (void)_updateWindowTitle;

@end
