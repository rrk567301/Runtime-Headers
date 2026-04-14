@interface PHSearchSuggestionProcessor : NSObject

+ (id)_pHSearchSuggestionFromPLSearchSuggestion:(id)a0 rangeOfSuggestionText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)searchSuggestionsFromPLSearchSuggestions:(id)a0 suggestions:(out id *)a1 queryId:(int)a2 batchId:(int)a3 rangeOfSuggestionText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
