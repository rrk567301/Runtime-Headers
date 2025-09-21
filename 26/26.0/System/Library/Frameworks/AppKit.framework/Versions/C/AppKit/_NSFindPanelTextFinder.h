@class NSString, NSFindPanel;

@interface _NSFindPanelTextFinder : _NSTextFinderImpl {
    NSFindPanel *_panel;
    NSString *_replacementString;
}

- (void)controlTextDidChange:(id)a0;
- (void)dealloc;
- (BOOL)isVisible;
- (void)setSearchString:(id)a0;
- (long long)style;
- (void)deactivate;
- (void)activate;
- (id)searchString;
- (id)replacementString;
- (void)_loadUI;
- (void)addStringToRecentSearchStrings:(id)a0;
- (BOOL)_caseInsensitiveSearchDefault;
- (long long)_defaultSubstringMatchType;
- (id)_findField;
- (void)_makeCurrentSearchOptionsDefault;
- (void)_orderFrontFindPanel:(id)a0;
- (id)_replaceField;
- (id)_replacementString;
- (void)_restoreDefaultSearchOptions;
- (void)_setCaseInsensitiveSearchDefault:(BOOL)a0;
- (void)_setDefaultSubstringMatchType:(long long)a0;
- (BOOL)_validateAction:(long long)a0;
- (void)addStringToRecentReplaceStrings:(id)a0;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (void)performTextFinderAction:(id)a0;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
