@class WBSReaderFontManager, NSString, NSArray, BrowserViewController, ReaderNavigationDelegate, _WKRemoteObjectInterface, ReaderWKView, ReaderAppearanceViewController, WBSReaderFont, ReaderUIDelegate, WBSReaderConfigurationManager;

@interface ReaderViewController : WebViewController <ReaderAppearanceViewControllerDelegate> {
    _WKRemoteObjectInterface *_readerViewControllerMessageReceiverInterface;
    WBSReaderFontManager *_fontManager;
    ReaderAppearanceViewController *_readerAppearanceViewController;
    ReaderNavigationDelegate *_navigationDelegate;
    ReaderUIDelegate *_UIDelegate;
    BOOL _isObservingKeyValueChanges;
    WBSReaderConfigurationManager *_configurationManager;
}

@property (readonly, nonatomic) ReaderWKView *readerView;
@property (readonly, nonatomic) void *readerController;
@property (readonly, nonatomic) BrowserViewController *originalArticleViewController;
@property (readonly, copy, nonatomic) NSArray *availableFonts;
@property (readonly, copy, nonatomic) NSArray *possibleFonts;
@property (readonly, nonatomic) WBSReaderFont *font;
@property (readonly, nonatomic) long long theme;
@property (readonly, nonatomic) BOOL isPresentingAppearanceCustomizationPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerViewControllerForPage:(const void *)a0;

- (void)invalidate;
- (void)close;
- (void).cxx_destruct;
- (void)setConfiguration:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidChangeEffectiveAppearance;
- (void)setFont:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (long long)_systemAppearance;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)goBack;
- (void)goForward;
- (BOOL)canMakeTextSmaller;
- (double)zoomFactor;
- (void)setZoomFactor:(double)a0;
- (BOOL)canMakeTextBigger;
- (void)updateLanguageTag:(id)a0;
- (void)resetZoom;
- (id)_createWebViewWithConfiguration:(id)a0;
- (void)_installWebKitDelegates;
- (void)_clearWebKitDelegates;
- (BOOL)bannerContainerViewShouldUseWhiteBackgroundColor:(id)a0;
- (void)_startObservingWKWebViewKeyValueChanges;
- (void)_stopObservingWKWebViewKeyValueChanges;
- (id)currentFontForReaderAppearanceViewController:(id)a0;
- (void)readerAppearanceViewController:(id)a0 performFontSizeAdjustment:(long long)a1;
- (long long)currentThemeForReaderAppearanceViewController:(id)a0;
- (void)readerAppearanceViewController:(id)a0 switchToTheme:(long long)a1;
- (id)possibleFontsForReaderAppearanceViewController:(id)a0;
- (BOOL)readerAppearanceViewController:(id)a0 canPerformFontSizeAdjustment:(long long)a1;
- (void)readerAppearanceViewController:(id)a0 switchToFont:(id)a1;
- (void)requestDeactivationFromUserAction;
- (void)_configurationDidChange:(id)a0;
- (id)availableFontsForReaderAppearanceViewController:(id)a0;
- (id)initWithReaderController:(void *)a0 configuration:(id)a1 browsingMode:(unsigned long long)a2;
- (void)_commonInitializationWithReaderController:(void *)a0;
- (void)_resetConfigurationManager;
- (void)reloadAndReapplyConfiguration;
- (void)_applyConfigurationAndSendNotification:(BOOL)a0;
- (void)zoomIn;
- (void)zoomOut;
- (BOOL)canResetZoom;
- (void)presentAppearanceCustomizationPopoverFromView:(id)a0;
- (void)dismissAppearanceCustomizationPopover;

@end
