@class Window, NSString, NSMenu, BrowserViewController, ToolbarDownloadsButton, NSToolbarItem, TextFieldThatIgnoresClicks, NSToolbar, TitlebarVisualEffectView, NSColor, NSMutableSet, NSSegmentedControl;

@interface WebAppWindowController : WindowController <NSWindowDelegate, NSMenuDelegate, ImageHopAnimationDelegate, ContentWindowController> {
    BOOL _windowWasLoaded;
    TitlebarVisualEffectView *_titlebarBackgroundView;
    NSColor *_titlebarColor;
    BOOL _updatingTitlebarColor;
    NSMutableSet *_imageHopAnimationControllers;
}

@property (class, readonly, nonatomic) BOOL hasEverShownWindow;

@property (weak) NSToolbar *toolbar;
@property (weak) TextFieldThatIgnoresClicks *websiteNameLabel;
@property (weak) NSSegmentedControl *backForwardSegmentedControl;
@property (weak) ToolbarDownloadsButton *showDownloadsButton;
@property (weak) NSToolbarItem *downloadsToolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Window *browserWindow;
@property (readonly, nonatomic) unsigned long long browsingMode;
@property (readonly, nonatomic) unsigned long long numberOfTabs;
@property (readonly, nonatomic) double topContentInset;
@property (readonly, nonatomic, getter=isPopupWindow) BOOL popupWindow;
@property (readonly, nonatomic) BOOL isInFullScreenMode;
@property (readonly, nonatomic) BOOL isInteractionBlockedByModalWindow;
@property (readonly, nonatomic) BOOL isShowingDownloadsPopover;
@property (readonly, nonatomic) BrowserViewController *currentBrowserViewController;
@property (readonly, nonatomic) BrowserViewController *currentBrowserViewControllerForNavigationPurposes;
@property (readonly, nonatomic) NSMenu *dynamicBackMenu;
@property (readonly, nonatomic) NSMenu *dynamicForwardMenu;
@property (nonatomic) struct CGPoint { double x; double y; } lastMouseClickPosition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } downloadHopStartPoint;

+ (id)activeWindowController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)noResponderFor:(SEL)a0;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;
- (void)menuNeedsUpdate:(id)a0;
- (void)setDocument:(id)a0;
- (BOOL)shouldCascadeWindows;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (void)windowDidLoad;
- (void)windowDidResignKey:(id)a0;
- (void)windowDidResignMain:(id)a0;
- (void)_downloadDidStart:(id)a0;
- (id)browserDocument;
- (void)_removeTemporaryDownloadsButton;
- (void)updateWindowTitlebarBlurFilters;
- (void)_addTemporaryDownloadsButton;
- (void)_addTemporaryDownloadsButtonIfAppropriate;
- (BOOL)_areBarsOrBannersVisible;
- (id)_currentTitlebarAppearance;
- (BOOL)_currentURLIsNativeContent;
- (BOOL)_currentURLShouldUseNativeContentAppearenceInTitleBar;
- (BOOL)_currentUrlIsBlankPage;
- (BOOL)_currentViewControllerShowsNativeContent;
- (unsigned long long)_defaultDownloadsButtonIndexForToolbarItems:(id)a0;
- (void)_downloadEntryStageDidChange:(id)a0;
- (struct CGPoint { double x0; double x1; })_downloadHopEndPoint;
- (void)_downloadsDidChange:(id)a0;
- (void)_downloadsTotalProgressDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_restrictedFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldShowWebsiteThemeColor;
- (void)_startDownloadHopAnimationFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateAppearancesOfTitlebarViews:(id)a0;
- (void)_updateTemporaryDownloadsButtonVisibility;
- (void)_updateTitlebarColor:(id)a0 pageIsPinned:(BOOL)a1 forceUpdate:(BOOL)a2;
- (void)_updateTitlebarColorFromWebView:(id)a0 forceUpdate:(BOOL)a1;
- (BOOL)anyToolbarsVisible;
- (void)beginDownloadLocationRemoteViewControllerRequestUsingBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrame;
- (void)downloadFailedToHopToDockFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)imageHopAnimationDidFinish:(id)a0;
- (id)imageHopParentWindow;
- (void)setFrameProgrammatically:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titlebarAppearance;
- (void)toggleDownloadsPopover:(id)a0;
- (void)updateTitlebarColor;

@end
