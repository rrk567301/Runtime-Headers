@class _CSMultiQuery, NSString, NSArray, CSSearchQueryContext, _CSContactSearch, NSObject, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_semaphore;

@interface CSUserQuery : CSSearchQuery {
    CSSearchQueryContext *_clientContext;
    NSString *_searchString;
    NSMutableArray *_nlpSuggestions;
    NSMutableArray *_templateSuggestions;
    NSMutableArray *_suggestions;
    NSMutableArray *_completions;
    _CSContactSearch *_contactSearch;
    _CSMultiQuery *_contactCountingQuerySearchFrom;
    _CSMultiQuery *_contactCountingQuerySearchTo;
    NSMutableSet *_instantAnswers;
    long long _foundSuggestionCount;
    BOOL _queryRewritten;
    long long _currentTokenKind;
    long long _currentTokenScope;
}

@property (copy) id /* block */ foundInstantAnswersHandler;
@property (copy, nonatomic) NSArray *contactSearchResults;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *contactSearchSemaphore;
@property (readonly, nonatomic) unsigned long long contactSearchSemaphoreWaitTime;
@property (readonly) long long foundSuggestionCount;
@property (copy) id /* block */ foundSuggestionsHandler;

+ (void)updateWithTemplateSuggestions:(id)a0 searchString:(id)a1 currentSuggestion:(id)a2;
+ (id)flattenCSFieldSpecifications:(id)a0;
+ (id)queryContextWithUserQueryString:(id)a0 searchString:(id)a1 clientContext:(id)a2;
+ (id)advancedComponentsWithSearchString:(id)a0 parseResult:(id)a1 parseOptions:(id)a2 queryContext:(id)a3;
+ (id)parseSearchString:(id)a0 parseOptions:(id)a1 queryContext:(id)a2;
+ (id)parseResultWithSearchString:(id)a0 parseOptions:(id)a1 queryContext:(id)a2 isZKW:(BOOL)a3;
+ (id)trimSuggestions:(id)a0 options:(id)a1 peopleSelectedScope:(long long)a2;
+ (id)dedupSuggestions:(id)a0 seenContactInfoToSuggestion:(id)a1;
+ (id)suggestionsByDetectingEmailIntentForPeopleSuggestions:(id)a0;
+ (id)dedupedSuggestions:(id)a0 options:(id)a1;
+ (id)orderedSuggestions:(id)a0 options:(id)a1;
+ (void)filteredTemplateSuggestions:(id)a0 nlpSuggestions:(id)a1;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (id)keyboardLanguage;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;
- (id)queryContext;
- (void)handleFoundItems:(id)a0;
- (void)handleCompletion:(id)a0;
- (void)willStartQuery;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (void)prepareSearch;
- (id)queryStringWithQueryContext:(id)a0 searchString:(id)a1 options:(id)a2;
- (id)initWithUserQueryString:(id)a0 queryContext:(id)a1;
- (id)initWithUserQueryString:(id)a0 userQueryContext:(id)a1;
- (id)clientContext;
- (id)foundNLPSuggestions;
- (id)foundTemplateSuggestions;
- (id)foundSuggestions;
- (id)foundCompletions;
- (void)handleFoundNLPSuggestions:(id)a0;
- (void)handleFoundTemplateSuggestions:(id)a0;
- (void)handleFoundSuggestions:(id)a0;
- (void)handleFoundCompletions:(id)a0;
- (id)processToContacts:(id)a0 resultsToMultiQuery:(id)a1 contactsTo:(id)a2 processedContacts:(id)a3;
- (id)processFromContacts:(id)a0 resultsFromMultiQuery:(id)a1 contactsFrom:(id)a2 processedContacts:(id)a3;
- (void)filterContactPeopleSuggestions:(id)a0 cachedSuggestionsEmailToScope:(id)a1 completionHandler:(id /* block */)a2;
- (id)peopleSuggestionsWithContactSearchResults:(id)a0;
- (void)handleSuggestions;
- (void)handleQueryRewritten;
- (void)userEngagedWithResult:(id)a0 visibleResults:(id)a1 interactionType:(int)a2;
- (void)userEngagedWithSuggestion:(id)a0 visibleSuggestions:(id)a1 interactionType:(int)a2;
- (void)updateRecentSuggestions:(id)a0;
- (BOOL)queryRewritten;
- (void)startContactSearchWithUserQuery:(id)a0 maxCount:(long long)a1;
- (void)startContactSearchIfNeeded;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (void)setFilterQueries:(id)a0;
- (id)filterQueries;
- (void)handleFoundInstantAnswers:(id)a0;
- (void)processInstantAnswersWithFoundItems:(id)a0;

@end
