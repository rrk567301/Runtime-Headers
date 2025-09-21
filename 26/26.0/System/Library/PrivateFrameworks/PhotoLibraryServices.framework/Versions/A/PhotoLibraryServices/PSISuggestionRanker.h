@interface PSISuggestionRanker : NSObject

+ (double)suggestionScoreForIndexCategory:(unsigned long long)a0;
+ (id)_orderedSuggestionCategoryTypes;
+ (double)_averageGroupRankingScoreForSuggestion:(id)a0;
+ (unsigned long long)_characterLengthForSuggestion:(id)a0 suggestionQuery:(id)a1;
+ (unsigned long long)_countBasedPriorityForSuggestion:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2;
+ (unsigned long long)_countOfOCRSuggestionsInSuggestions:(id)a0;
+ (id)_dedupeNaturalLanguageDateAndMonthOrYearDateSuggestions:(id)a0;
+ (double)_percentOverlapWithCompletionText:(id)a0 suggestionQuery:(id)a1 minPercentOverlapForPrioritization:(double)a2;
+ (id)_rankedSearchSuggestionsFromSuggestions:(id)a0 queryAssetCount:(unsigned long long)a1 queryCollectionCount:(unsigned long long)a2 suggestionType:(unsigned long long)a3 suggestionQuery:(id)a4;
+ (void)_rankedSuggestionsFromRankedSuggestionsBySuggestionCategoryType:(id)a0 orderedSuggestionCategoryTypes:(id)a1 maxSuggestions:(unsigned long long)a2 suggestionQuery:(id)a3 suggestionType:(unsigned long long)a4 rankedSuggestions:(id)a5 resumingIndex:(unsigned long long)a6 completion:(id /* block */)a7;
+ (BOOL)_suggestionIsOCRSuggestion:(id)a0;
+ (BOOL)_suggestionIsPrimaryPersonOrPetSuggestion:(id)a0;
+ (double)initialSuggestionScoreForIndexCategory:(unsigned long long)a0;
+ (id)rankedSearchSuggestionsFromSuggestionCandidates:(id)a0 suggestionType:(unsigned long long)a1 queryAssetCount:(unsigned long long)a2 queryCollectionCount:(unsigned long long)a3 suggestionLimit:(unsigned long long)a4 suggestionQuery:(id)a5;
+ (id)sortedSuggestionsFromSuggestions:(id)a0;

@end
