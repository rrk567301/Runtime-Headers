@class NSString, NSFindPanel;

@interface _NSFindPanelTextFinder : _NSTextFinderImpl {
    NSFindPanel *_panel;
    NSString *_replacementString;
}

- (void)dealloc;
- (void)activate;
- (long long)style;
- (id)replacementString;
- (void)_loadUI;
- (void)addStringToRecentSearchStrings:(id)a0;
- (char)_caseInsensitiveSearchDefault;
- (long long)_defaultSubstringMatchType;
- (id)_findField;
- (void)_makeCurrentSearchOptionsDefault;
- (void)_orderFrontFindPanel:(id)a0;
- (id)_replaceField;
- (id)_replacementString;
- (void)_restoreDefaultSearchOptions;
- (void)_setCaseInsensitiveSearchDefault:(char)a0;
- (void)_setDefaultSubstringMatchType:(long long)a0;
- (char)_validateAction:(long long)a0;
- (void)addStringToRecentReplaceStrings:(id)a0;
- (void)comboBoxSelectionDidChange:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)deactivate;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (char)isVisible;
- (void)performTextFinderAction:(id)a0;
- (unsigned long long)searchOptions;
- (id)searchString;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSearchString:(id)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
