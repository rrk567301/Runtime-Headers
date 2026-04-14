@class NSArray, PSISuggestionOptions, NSAttributedString, PSIDatabase;

@interface PSISuggestionQuery : NSObject

@property (readonly, nonatomic) PSIDatabase *photosEntityStore;
@property (nonatomic) BOOL cancelled;
@property (readonly, nonatomic) NSAttributedString *formattedSearchText;
@property (readonly, nonatomic) NSAttributedString *originalSearchText;
@property (readonly, nonatomic) PSISuggestionOptions *suggestionOptions;
@property (readonly, nonatomic) NSArray *completionSuggestionTexts;
@property (readonly, nonatomic) NSArray *completionSuggestionDates;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfCompletionSuggestionDates;
@property (readonly, nonatomic) NSArray *suggestionComponents;

+ (void)_pairLocationCompletionSuggestionsIfPossible:(id)a0 completion:(id /* block */)a1;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithFormattedSearchText:(id)a0 originalSearchText:(id)a1 completionSuggestionTexts:(id)a2 suggestionOptions:(id)a3 suggestionComponents:(id)a4 photosEntityStore:(id)a5;
- (id)performQueryWithSearchResultAssetUUIDs:(id)a0 collectionUUIDs:(id)a1 completionSuggestionDateComponents:(id)a2 completionTextForDateComponents:(id)a3;
- (id)_bestNextTokenSuggestionFromNextTokenSuggestionCandidatesByIndexCategory:(id)a0 forLocationCompletion:(id)a1;
- (id)_generateCompletionSuggestionsForAssetUUIDs:(id)a0 collectionUUIDs:(id)a1 restrictedIndexCategories:(id)a2 shouldFoldSuggestions:(BOOL)a3 suggestionLimit:(unsigned long long)a4 completionSuggestionDateComponents:(id)a5 completionTextForDateComponents:(id)a6;
- (id)_generateLocationNextTokenSuggestionsByIndexCategoryForLocationCompletion:(id)a0;
- (id)_generateNextTokenSuggestionsForAssetUUIDs:(id)a0 collectionUUIDs:(id)a1 suggestionLimit:(unsigned long long)a2;
- (id)_performQueryForPairedLocationSuggestions:(id)a0;

@end
