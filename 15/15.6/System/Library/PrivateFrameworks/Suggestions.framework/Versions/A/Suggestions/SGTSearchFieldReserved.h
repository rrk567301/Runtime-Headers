@class NSMapTable, SGTSuggestion, _SGTQueryScopeMenuOverride, SGTQueryGenius, SGTFadeWindowEffect, SGTCompletionTableView, SGTInput, NSMutableArray, NSProgressIndicator, NSWindowController, NSString, NSDictionary, SGTCompletionWindow, NSTimer, NSMutableSet, NSArray;
@protocol SGTSearchFieldQueryScopeDelegate, SGTSearchFieldDelegate;

@interface SGTSearchFieldReserved : NSObject {
    NSArray *suggesters;
    SGTInput *currentInput;
    NSMutableArray *categories;
    NSMapTable *suggestionsByCategory;
    NSMutableSet *categoriesWithIntermediateResults;
    NSArray *displayCategories;
    NSMapTable *displaySuggestionsByCategory;
    SGTCompletionWindow *completionWindow;
    SGTCompletionTableView *completionTableView;
    char settingValue;
    NSString *userTypedString;
    NSMutableArray *suggestions;
    SGTSuggestion *currentSuggestion;
    NSArray *freeTextSuggestions;
    char abortSearchWhenEmptyString;
    char textChangingProgrammatically;
    char open;
    char isDisplayingStaticSuggestions;
    char observingApplicationState;
    char interactingWithButton;
    char textIsMarked;
    char ignoreNextTextValidation;
    double minimumCompletionWindowWidth;
    unsigned long long textChangedID;
    long long typingScope;
    char acceptsScopeSuggestion;
    SGTQueryGenius *genius;
    id eventMonitor;
    NSTimer *autocloseTimer;
    SGTFadeWindowEffect *autocloseFadeEffect;
    double lastInputStartTime;
    id debugEventMonitor;
    NSWindowController *debugWindowController;
    long long savedSelectionIndex;
    char currentSelectionIsAutofirst;
    char selectingBestSuggestion;
    char enforceSelectionWhenPossible;
    char keepCompletionWindowOnWindowDrag;
    char ignoreWindowResizeNotifications;
    char _highlightsMatches;
    id<SGTSearchFieldQueryScopeDelegate> queryScopeDelegate;
    id<SGTSearchFieldDelegate> delegate;
    _SGTQueryScopeMenuOverride *queryScopeMenuOverride;
    NSProgressIndicator *spinner;
    long long currentRequest;
    double queryScopeMenuSpinTime;
    NSDictionary *searchDelegateUserInfo;
    NSMutableArray *selectionEventCache;
    SEL selectionSelectorCache;
    char queryStringChangesAreTransient;
    unsigned long long oldStringLength;
    unsigned long long maximumEffectiveInputLength;
    long long searchQueryIndex;
    id /* block */ _didFindSuggestionsCallback;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
