@class AXFUIElement, NSString, SCRElement, SCRCTargetSelectorTimer, AXFTextMarkerRange;

@interface SCRSafariApplication : SCRApplication {
    NSString *_lastURL;
    char _wasLastActionInWebPage;
    SCRElement *_searchTextField;
    SCRCTargetSelectorTimer *_firstSearchResultTimer;
    SCRCTargetSelectorTimer *_openedLinkTimer;
    NSString *_openedLinkAnnouncement;
    SCRElement *_selectedScribbleElement;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectedScribbleRect;
}

@property (nonatomic) char _didShowModalDialogRegistered;
@property (nonatomic) char _didFinishShowingModalDialogRegistered;
@property (nonatomic) char _isSafariReaderShowing;
@property (copy, nonatomic) AXFUIElement *_currentFocusedTabOrWindow;
@property (retain, nonatomic) NSString *_currentURL;
@property (retain, nonatomic) AXFTextMarkerRange *lastSearchSelectedMarkerRange;
@property (retain, nonatomic) AXFTextMarkerRange *lastSearchMarkerRangeForElement;
@property (retain, nonatomic) SCRElement *pageAddressTextField;

+ (long long)nativeSafariSearchForEvent:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_processEvent:(id)a0;
- (void)_windowDidBecomeKey:(id)a0;
- (void)dispatchEvent:(id)a0;
- (void)windowDidBecomeKey;
- (void)_setCurrentURL:(id)a0;
- (id)_suggestionMenu;
- (void)addKeyboardSyncContextForElement:(id)a0 previousKeyboardChild:(id)a1 request:(id)a2;
- (void)_addObserverForOpeningLinks;
- (void)_addObserverForPageAddressChange;
- (void)_addObserverForPageLayoutComplete;
- (void)_addObserverForSafariReader;
- (void)_announceOpenedLinkAfterDelay;
- (void)_announceOpenedLinkImmediately;
- (void)_checkIfLayoutChangeWasPageChange:(struct __AXUIElement { } *)a0;
- (id)_currentlySelectedSafariTabOrWindow;
- (void)_didFinishShowingModalDialog:(id)a0;
- (void)_didShowModalDialog:(id)a0;
- (void)_elementWasCreated:(id)a0;
- (id)_findDialog;
- (char)_focusChainStillValid:(id)a0;
- (BOOL)_focusChainsStillValid;
- (void)_handleLayoutComplete:(id)a0;
- (void)_initializePageAddressTextFieldAndMove:(char)a0;
- (id)_newPersistentKeyForFocusedChildAttributesWithURL:(id)a0;
- (void)_openedLink:(id)a0;
- (void)_outputImmediateSearchResult;
- (char)_outputSelectedTextWithEvent:(id)a0 request:(id)a1 webArea:(id)a2 direction:(long long)a3;
- (void)_pageAddressDidChange:(id)a0;
- (id)_retrieveLastFocusedChildForWebArea:(id)a0;
- (void)_safariReaderDidToggle;
- (void)_safariReaderEntered:(id)a0;
- (void)_safariReaderExited:(id)a0;
- (void)_selectedRowsDidChange:(id)a0;
- (void)_speakWebPageSummary:(id)a0;
- (id)_stripHashFromURL:(id)a0;
- (id)_topLevelWebArea;
- (void)_updateURL;
- (void)_updateVOCursorAfterReloadOfWebArea:(id)a0;
- (void)_webAreaWasLoaded:(id)a0;
- (void)addHideDistractionActionsToGuide:(id)a0 forElement:(id)a1;
- (void)addObserverForModalDialogs;
- (void)applicationDidInitialize;
- (void)applicationDidShow;
- (char)chainEvent:(id)a0 request:(id)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)dispatchSpeakWebPageSummary:(id)a0;
- (char)focusInto:(id)a0 event:(id)a1;
- (char)handleEvent:(id)a0 request:(id)a1;
- (char)handleHideDistractionForElement:(id)a0 request:(id)a1;
- (char)isSafariApplication;
- (char)moveToLastElementAfterPageLoadWithRequest:(id)a0;
- (char)outputSearchSelection:(id)a0 forElement:(id)a1 soundRequest:(id)a2 request:(id)a3 webArea:(id)a4;
- (char)profileMatches:(id)a0 url:(id)a1 outKey:(id *)a2 outProfile:(id *)a3;
- (void)setLastFocusedElement:(id)a0 forURL:(id)a1;
- (char)updateFocusChainInWebArea:(id)a0;
- (id)updateFocusChainToWebArea;
- (char)updateHideDistractionSelectionWithPoint:(long long)a0 request:(id)a1;

@end
