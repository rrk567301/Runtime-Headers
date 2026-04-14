@class SFPerformEntityQueryCommand;

@interface SPSearchFilterEntity : SPSearchEntity

@property (retain, nonatomic) SFPerformEntityQueryCommand *filterCommand;

- (BOOL)shouldAllowMoreResults;
- (id)enabledDomains;
- (id)command;
- (void).cxx_destruct;
- (id)folderScopes;
- (BOOL)isFilterSearch;
- (BOOL)isScopedSearch;
- (id)spotlightFilterQueries;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;

@end
