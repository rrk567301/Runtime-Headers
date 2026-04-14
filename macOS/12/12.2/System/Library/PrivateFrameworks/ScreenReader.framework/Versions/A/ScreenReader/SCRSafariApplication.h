@class SCRUIElement, NSString, SCRElement, SCRTextMarkerRange, SCRCTargetSelectorTimer;

@interface SCRSafariApplication : SCRApplication {
    SCRElement *_pageAddressTextField;
    NSString *_lastURL;
    BOOL _wasLastActionInWebPage;
    SCRElement *_searchTextField;
    SCRCTargetSelectorTimer *_firstSearchResultTimer;
}

@property (nonatomic) BOOL _didShowModalDialogRegistered;
@property (nonatomic) BOOL _didFinishShowingModalDialogRegistered;
@property (nonatomic) BOOL _isSafariReaderShowing;
@property (copy, nonatomic) SCRUIElement *_currentFocusedTabOrWindow;
@property (retain, nonatomic) NSString *_currentURL;
@property (retain, nonatomic) SCRTextMarkerRange *lastSearchSelectedMarkerRange;
@property (retain, nonatomic) SCRTextMarkerRange *lastSearchMarkerRangeForElement;

+ (long long)nativeSafariSearchForEvent:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_windowDidBecomeKey:(id)a0;
- (void)windowDidBecomeKey;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)applicationDidInitialize;
- (void)_elementWasCreated:(id)a0;
- (void)_webAreaWasLoaded:(id)a0;
- (BOOL)isSafariApplication;
- (BOOL)profileMatches:(id)a0 url:(id)a1 outKey:(id *)a2 outProfile:(id *)a3;
- (void)addKeyboardSyncContextForElement:(id)a0 previousKeyboardChild:(id)a1 request:(id)a2;
- (void)applicationDidShow;
- (BOOL)updateFocusChainInWebArea:(id)a0;
- (void)_updateVOCursorAfterReloadOfWebArea:(id)a0;
- (BOOL)moveToLastElementAfterPageLoadWithRequest:(id)a0;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (id)_suggestionMenu;
- (id)updateFocusChainToWebArea;
- (void)_addObserverForPageAddressChange;
- (id)_topLevelWebArea;
- (void)_setCurrentURL:(id)a0;
- (void)_addObserverForSafariReader;
- (void)_addObserverForPageLayoutComplete;
- (BOOL)outputSearchSelection:(id)a0 forElement:(id)a1 soundRequest:(id)a2 request:(id)a3 webArea:(id)a4;
- (void)_outputImmediateSearchResult;
- (BOOL)_outputSelectedTextWithEvent:(id)a0 request:(id)a1 webArea:(id)a2 direction:(long long)a3;
- (id)_retrieveLastFocusedChildForWebArea:(id)a0;
- (void)setLastFocusedElement:(id)a0 forURL:(id)a1;
- (void)_safariReaderEntered:(id)a0;
- (void)_safariReaderExited:(id)a0;
- (BOOL)_focusChainStillValid:(id)a0;
- (BOOL)_focusChainsStillValid;
- (void)_safariReaderDidToggle;
- (void)_handleLayoutComplete:(id)a0;
- (void)_checkIfLayoutChangeWasPageChange:(struct __AXUIElement { } *)a0;
- (void)_initializePageAddressTextFieldAndMove:(BOOL)a0;
- (void)_selectedRowsDidChange:(id)a0;
- (void)_pageAddressDidChange:(id)a0;
- (void)addObserverForModalDialogs;
- (void)_updateURL;
- (id)_currentlySelectedSafariTabOrWindow;
- (id)_newPersistentKeyForFocusedChildAttributesWithURL:(id)a0;
- (id)_stripHashFromURL:(id)a0;
- (void)_speakWebPageSummary:(id)a0;
- (void)_didShowModalDialog:(id)a0;
- (void)_didFinishShowingModalDialog:(id)a0;
- (id)_findDialog;
- (void)dispatchSpeakWebPageSummary:(id)a0;

@end
