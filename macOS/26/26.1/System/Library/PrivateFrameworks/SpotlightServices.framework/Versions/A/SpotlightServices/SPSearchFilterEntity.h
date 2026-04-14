@class SFPerformEntityQueryCommand;

@interface SPSearchFilterEntity : SPSearchEntity

@property (retain, nonatomic) SFPerformEntityQueryCommand *filterCommand;

- (id)enabledDomains;
- (void).cxx_destruct;
- (id)command;
- (BOOL)shouldAllowMoreResults;
- (id)folderScopes;
- (BOOL)isFilterSearch;
- (BOOL)isScopedSearch;
- (id)spotlightFilterQueries;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;

@end
