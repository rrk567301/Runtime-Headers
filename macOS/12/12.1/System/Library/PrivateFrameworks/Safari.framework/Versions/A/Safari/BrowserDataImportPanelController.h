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
- (void)_updateWindowTitle;
- (void)_setImportingBrowserIcon;
- (BOOL)_isBrowserProcessInApplicationList:(id)a0;
- (void)_updateImportButtonEnabled;
- (void)_updateShowCloseBrowserSupportText;
- (void)_updateCheckboxVisibility;
- (id)_initWithBrowserDataDirectories:(id)a0;
- (void)_runModalSheet;
- (id)_finishedImportTitleString;
- (void)importDidFinish:(id)a0;
- (id)_importingTitleString;
- (void)_importFromBrowser;
- (id)_allCheckboxes;
- (unsigned long long)_supportedImportDataTypes;
- (id)_checkboxesForDataTypes:(unsigned long long)a0;
- (unsigned long long)_defaultSelectedDataTypes;
- (BOOL)_isAnyCheckboxChecked;
- (id)_visibleCheckboxes;
- (id)_defaultSelectedCheckboxes;
- (BOOL)_checkboxIsAvailableAndChecked:(id)a0;
- (unsigned long long)_selectedDataTypes;
- (void)checkboxToggled:(id)a0;
- (void)importClicked:(id)a0;

@end
