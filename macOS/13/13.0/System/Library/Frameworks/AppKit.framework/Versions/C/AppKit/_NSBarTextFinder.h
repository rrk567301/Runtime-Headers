@class NSString, NSTextFinderBarView, NSResponder;

@interface _NSBarTextFinder : _NSTextFinderImpl <NSSearchFieldDelegate> {
    NSTextFinderBarView *_view;
    NSString *_replacementString;
    BOOL _clientRespondsToReplace;
    BOOL _clientRespondsToReplaceAll;
    BOOL _divergedFromPasteboard;
    BOOL _preventResetSettingsOnDivergeFromPasteboard;
    BOOL _nextSearchFieldActionIsReturn;
    NSResponder *_originalResponder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)style;
- (id)replacementString;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)activate;
- (id)_replacementString;
- (id)_view;
- (BOOL)isVisible;
- (BOOL)validateMenuItem:(id)a0;
- (void)deactivate;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)appDidActivate:(id)a0;
- (void)_setFinder:(id)a0;
- (BOOL)_needToRefreshFromPasteboard;
- (id)searchString;
- (void)setSearchString:(id)a0;
- (unsigned long long)searchOptions;
- (long long)substringMatchType;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (void)_didFindMatchInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wrapped:(BOOL)a1 forward:(BOOL)a2;
- (void)takeSearchString:(id /* block */)a0;
- (void)showReplace;
- (void)hideReplace;
- (void)_setMatchCount:(long long)a0;
- (void)addStringToRecentSearchStrings:(id)a0;
- (void)addStringToRecentReplaceStrings:(id)a0;
- (id)_findField;
- (id)_replaceField;
- (void)_findBarWindowDidBecomeKey:(id)a0;
- (void)_changeMatchSettings:(id)a0;
- (void)_changeSearchOptions:(id)a0;
- (void)_findPatternSelected:(id)a0;
- (void)_loadUI;
- (void)_unregisterObserversForWindow:(id)a0;
- (void)_registerObserversForWindow:(id)a0;
- (void)_setView:(id)a0;
- (void)_findBarViewWillMoveToWindow:(id)a0;
- (void)_clearAllMatches;
- (void)_updateForwardBackButtons;
- (void)_setReplacementCount:(long long)a0;
- (void)_newSearchForString:(id)a0 showFirstMatch:(BOOL)a1;
- (id)_statusStringForMatchCount:(long long)a0;
- (void)_activateWithReplace:(BOOL)a0;
- (void)_divergeFromPasteboard;
- (void)_searchFieldAction:(id)a0;
- (void)_performFindBarAction:(id)a0;

@end
