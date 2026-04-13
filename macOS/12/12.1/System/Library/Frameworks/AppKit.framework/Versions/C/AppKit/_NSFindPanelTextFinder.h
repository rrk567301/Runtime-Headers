@class NSString, NSFindPanel;

@interface _NSFindPanelTextFinder : _NSTextFinderImpl {
    NSFindPanel *_panel;
    NSString *_replacementString;
}

- (void)dealloc;
- (long long)style;
- (id)replacementString;
- (void)activate;
- (id)_replacementString;
- (BOOL)isVisible;
- (void)deactivate;
- (void)controlTextDidChange:(id)a0;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)performTextFinderAction:(id)a0;
- (BOOL)_validateAction:(long long)a0;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (id)_findField;
- (unsigned long long)searchOptions;
- (void)_restoreDefaultSearchOptions;
- (id)searchString;
- (void)setSearchString:(id)a0;
- (long long)substringMatchType;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (id)_replaceField;
- (void)addStringToRecentSearchStrings:(id)a0;
- (void)addStringToRecentReplaceStrings:(id)a0;
- (void)_loadUI;
- (long long)_defaultSubstringMatchType;
- (void)_setDefaultSubstringMatchType:(long long)a0;
- (BOOL)_caseInsensitiveSearchDefault;
- (void)_setCaseInsensitiveSearchDefault:(BOOL)a0;
- (void)_makeCurrentSearchOptionsDefault;
- (void)_orderFrontFindPanel:(id)a0;

@end
