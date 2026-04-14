@class CNContactStore, _CDPeopleSuggesterContext, NSArray, CNAutocompleteFetchRequest, _CDPeopleSuggesterSettings;

@interface _CNAutocompleteCoreDuetPredictionSearchStrategyTask : CNTask {
    CNAutocompleteFetchRequest *_request;
    CNContactStore *_contactStore;
    _CDPeopleSuggesterContext *_context;
    _CDPeopleSuggesterSettings *_settings;
    NSArray *_suggestions;
    NSArray *_results;
}

+ (void)configureContext:(id)a0 withFetchRequest:(id)a1;
+ (void)configureSettings:(id)a0 withFetchRequest:(id)a1;
+ (id)constrainMechanismsForSearchType:(unsigned long long)a0;
+ (long long)_addressTypeFromHandle:(id)a0;

- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)initWithRequest:(id)a0 contactStore:(id)a1;
- (void)prepareQuery;
- (id)suggesterContextForFetchRequest:(id)a0;
- (id)suggesterSettingsForFetchRequest:(id)a0;
- (void)runQuery;
- (void)convertResults;
- (id)resultValueForCDContact:(id)a0;
- (long long)addressTypeForCDContact:(id)a0;

@end
