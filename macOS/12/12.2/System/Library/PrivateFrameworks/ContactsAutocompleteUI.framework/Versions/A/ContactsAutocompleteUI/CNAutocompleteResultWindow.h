@class NSArray, NSMutableDictionary, NSString;

@interface CNAutocompleteResultWindow : CNAutocompleteResultWindowBase <CNAutocompleteResultTableViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *prefixToResults;
@property (retain, nonatomic) NSMutableDictionary *primaryResults;
@property (retain, nonatomic) NSMutableDictionary *suggestedResults;
@property (copy, nonatomic) NSArray *autocompleteResults;
@property (nonatomic) BOOL onlyEmailFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (BOOL)sourceTypeIsConsideredASuggestion:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didClickTableColumn:(id)a1;
- (id)resultForString:(id)a0;
- (id)displayStringForResult:(id)a0;
- (id)viewForResult:(id)a0;
- (BOOL)selectAutocompleteResultForString:(id)a0;
- (void)logDiagnosticForRow:(long long)a0;
- (id)viewForRow:(long long)a0;
- (id)resultsAsPrefixStringMatches;
- (BOOL)includeAddressForPrefixMatching;
- (id)viewForResult:(id)a0 withColor:(id)a1;
- (id)viewForResult:(id)a0 withColor:(id)a1 andImage:(id)a2;
- (id)emptyResultViewWithColor:(id)a0 andImage:(id)a1;
- (void)setAutocompleteResults:(id)a0 forFetchRequest:(id)a1;
- (void)refreshViewForResult:(id)a0;

@end
