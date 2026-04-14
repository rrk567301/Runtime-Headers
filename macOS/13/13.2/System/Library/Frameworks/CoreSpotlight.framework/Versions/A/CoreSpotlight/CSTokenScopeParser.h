@interface CSTokenScopeParser : NSObject

- (id)init;
- (void)loadScopeKeyMapTableForCurrentLocale;
- (void)loadDefaultScopeKeyMapTable;
- (id)tokenScopeConfigurationTable;
- (id)scopeKeyMapTable;
- (id)tokenScopeConfigurationForKey:(id)a0;
- (void)updateScopeKeyMapTableIfNeeded;
- (long long)indexForScopeKey:(id)a0;
- (id)tokenFromConfiguration:(id)a0 userString:(id)a1 displayString:(id)a2 handle:(id)a3;
- (id)suggestionTokenForString:(id)a0;
- (id)messageSuggestionTokenForString:(id)a0;

@end
