@class NSTextField, NSProgressIndicator, NSView, BrowserDataDirectories, NSGridRow, NSStackView, NSLayoutConstraint, NSImageView, NSButton, NSBox;
@protocol StartPageFeatureAvailabilityImportBrowserDataCollectionViewItemDelegate;

@interface StartPageFeatureAvailabilityImportBrowserDataCollectionViewItem : NSCollectionViewItem {
    long long _importPhase;
    BOOL _isBrowserProcessRunning;
    BOOL _isObservingRunningApplications;
    id _browserDataImportingDidPartiallySucceedNotificationObserver;
    id _browserDataImportingDidFailNotificationObserver;
    id _browserDataImportingDidEndNotificationObserver;
}

@property (weak) NSImageView *safariImageView;
@property (weak) NSTextField *topTitleLabel;
@property (weak) NSTextField *bottomTitleLabel;
@property (weak) NSTextField *topsubTitleLabel;
@property (weak) NSTextField *bottomsubTitleLabel;
@property (weak) NSButton *passwordsCheckBox;
@property (weak) NSButton *bookmarksAndHistoryCheckBox;
@property (weak) NSImageView *rightArrow;
@property (weak) NSButton *notNowButton;
@property (weak) NSImageView *originBrowserImageView;
@property (weak) NSImageView *browserArrowImageView;
@property (weak) NSTextField *importTitle;
@property (weak) NSGridRow *bookmarksAndHistoryRow;
@property (weak) NSGridRow *passwordsRow;
@property (weak) NSTextField *importErrorMessageTextField;
@property (weak) NSTextField *quitBrowserTextField;
@property (weak) NSTextField *importOneElementTextField;
@property (weak) NSButton *importButton;
@property (weak) NSStackView *migrateButtonStackView;
@property (weak) NSProgressIndicator *importingProgressIndicator;
@property (weak) NSImageView *checkmarkImageView;
@property (weak) NSButton *closeButton;
@property (weak) NSBox *horizontalLineSeparator;
@property (weak) NSLayoutConstraint *titleToImportOneElementTextField;
@property (weak) NSLayoutConstraint *titleToGridView;
@property (weak) NSView *importContentPlaceholderView;
@property (retain, nonatomic) NSView *importContentView;
@property (retain, nonatomic) BrowserDataDirectories *browserDataDirectories;
@property (nonatomic) unsigned long long availableDataTypes;
@property (nonatomic) BOOL displayAsSheet;
@property (weak) id<StartPageFeatureAvailabilityImportBrowserDataCollectionViewItemDelegate> delegate;

- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)close:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityChildrenInNavigationOrder;
- (void)awakeFromNib;
- (void)_updateAppearance;
- (void)_forceAccessibilityFocusOnImportTitleShouldNotifyUser:(BOOL)a0;
- (void)_importDataTypesDidChange:(id)a0;
- (BOOL)_isBrowserProcessInApplicationList:(id)a0;
- (void)_removeBrowserImportingNotificationObservers;
- (void)_startImportingBrowserDataTypes:(unsigned long long)a0;
- (void)_stopObservingRunningApplicationsIfNeeded;
- (void)_updateViewContent;
- (void)importSelectedItems:(id)a0;

@end
