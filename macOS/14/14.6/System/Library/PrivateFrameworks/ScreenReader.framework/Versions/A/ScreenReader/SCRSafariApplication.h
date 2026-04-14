@class AXFUIElement, NSString, SCRElement, SCRCTargetSelectorTimer, AXFTextMarkerRange;

@interface SCRSafariApplication : SCRApplication {
    NSString *_lastURL;
    BOOL _wasLastActionInWebPage;
    SCRElement *_searchTextField;
    SCRCTargetSelectorTimer *_firstSearchResultTimer;
}

@property (nonatomic) BOOL _didShowModalDialogRegistered;
@property (nonatomic) BOOL _didFinishShowingModalDialogRegistered;
@property (nonatomic) BOOL _isSafariReaderShowing;
@property (copy, nonatomic) AXFUIElement *_currentFocusedTabOrWindow;
@property (retain, nonatomic) NSString *_currentURL;
@property (retain, nonatomic) AXFTextMarkerRange *lastSearchSelectedMarkerRange;
@property (retain, nonatomic) AXFTextMarkerRange *lastSearchMarkerRangeForElement;
@property (retain, nonatomic) SCRElement *pageAddressTextField;

+ (long long)nativeSafariSearchForEvent:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_windowDidBecomeKey:(id)a0;
- (void)_updateURL;
- (void)windowDidBecomeKey;
- (void)_setCurrentURL:(id)a0;
- (void)addKeyboardSyncContextForElement:(id)a0 previousKeyboardChild:(id)a1 request:(id)a2;
- (id)_suggestionMenu;
- (void)_addObserverForPageAddressChange;
- (void)_addObserverForPageLayoutComplete;
- (void)_addObserverForSafariReader;
- (void)_checkIfLayoutChangeWasPageChange:(struct __AXUIElement { } *)a0;
- (id)_currentlySelectedSafariTabOrWindow;
- (void)_didFinishShowingModalDialog:(id)a0;
- (void)_didShowModalDialog:(id)a0;
- (void)_elementWasCreated:(id)a0;
- (id)_findDialog;
- (BOOL)_focusChainStillValid:(id)a0;
- (BOOL)_focusChainsStillValid;
- (void)_handleLayoutComplete:(id)a0;
- (void)_initializePageAddressTextFieldAndMove:(BOOL)a0;
- (id)_newPersistentKeyForFocusedChildAttributesWithURL:(id)a0;
- (void)_outputImmediateSearchResult;
- (BOOL)_outputSelectedTextWithEvent:(id)a0 request:(id)a1 webArea:(id)a2 direction:(long long)a3;
- (void)_pageAddressDidChange:(id)a0;
- (id)_retrieveLastFocusedChildForWebArea:(id)a0;
- (void)_safariReaderDidToggle;
- (void)_safariReaderEntered:(id)a0;
- (void)_safariReaderExited:(id)a0;
- (void)_selectedRowsDidChange:(id)a0;
- (void)_speakWebPageSummary:(id)a0;
- (id)_stripHashFromURL:(id)a0;
- (id)_topLevelWebArea;
- (void)_updateVOCursorAfterReloadOfWebArea:(id)a0;
- (void)_webAreaWasLoaded:(id)a0;
- (void)addObserverForModalDialogs;
- (void)applicationDidInitialize;
- (void)applicationDidShow;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)dispatchSpeakWebPageSummary:(id)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)isSafariApplication;
- (BOOL)moveToLastElementAfterPageLoadWithRequest:(id)a0;
- (BOOL)outputSearchSelection:(id)a0 forElement:(id)a1 soundRequest:(id)a2 request:(id)a3 webArea:(id)a4;
- (BOOL)profileMatches:(id)a0 url:(id)a1 outKey:(id *)a2 outProfile:(id *)a3;
- (void)setLastFocusedElement:(id)a0 forURL:(id)a1;
- (BOOL)updateFocusChainInWebArea:(id)a0;
- (id)updateFocusChainToWebArea;

@end
