@interface PSISuggestionQueryUtilities : NSObject

+ (BOOL)rangeExists:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forString:(id)a1;
+ (void)_categorizeCompletionTexts:(id)a0 completion:(id /* block */)a1;
+ (id)_dateFilterFromStartDateComponents:(id)a0 endDateComponents:(id)a1;
+ (id)_filterGroups:(id)a0 forExcludedIndexCategories:(id)a1 forRestrictedIndexCategories:(id)a2;
+ (unsigned long long)_matchTypeForCompletionSuggestionText:(id)a0 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionTexts:(id)a2;
+ (id)allowedIndexCategoriesForPairedLocationPrimarySuggestions;
+ (id)allowedIndexCategoriesForPairedLocationSecondarySuggestions;
+ (id)dedupedSuggestionComponentsFromSuggestionComponentsMap:(id)a0;
+ (id)excludedLocationCategoriesForPairedLocationPrimarySuggestions;
+ (BOOL)groupIsValidForSuggestionGeneration:(id)a0 suggestionType:(unsigned long long)a1 allowedIndexCategories:(id)a2 suggestionQuery:(id)a3;
+ (BOOL)groupWithAssetCountMeetsAssetMatchThreshold:(unsigned long long)a0 assetSearchResultsCount:(unsigned long long)a1;
+ (BOOL)isEligibleIndexCategory:(unsigned long long)a0 forSuggestionWithType:(unsigned long long)a1;
+ (unsigned long long)locationPairingScore:(id)a0 otherLocationSuggestion:(id)a1;
+ (id)mapKeyForSuggestionComponent:(id)a0;
+ (unsigned long long)scoreForLocationSuggestionStringLength:(id)a0;
+ (id)searchIndexCategoriesIndexSetFromPLSearchSuggestionCategoriesTypeIndexSet:(id)a0;
+ (id)sortLocationSuggestions:(id)a0;
+ (id)suggestionCandidatesByContentStringFromSuggestionComponents:(id)a0;
+ (id)suggestionCandidatesByIndexCategoryFromSuggestionComponents:(id)a0 suggestionType:(unsigned long long)a1;
+ (id)suggestionCandidatesBySuggestionCategoriesTypeFromSuggestionComponents:(id)a0 assetIds:(struct __CFArray { } *)a1 collectionIds:(struct __CFArray { } *)a2 wantsSuggestionCounts:(BOOL)a3;
+ (BOOL)suggestionCategoriesPairingIsValid:(unsigned long long)a0 otherCategory:(unsigned long long)a1;
+ (id)suggestionComponentForCompletionSuggestionDateComponents:(id)a0 rangeOfCompletionSuggestionDateComponentsInSearchText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchQueryAssetIds:(struct __CFArray { } *)a2 suggestionQuery:(id)a3 photosEntityStore:(id)a4;
+ (id)suggestionComponentFromGroup:(id)a0 completionText:(id)a1 suggestionQuery:(id)a2 suggestionOptions:(id)a3 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 requiresScopedUUIDs:(BOOL)a5 generateAssetSuggestions:(BOOL)a6 generateCollectionSuggestions:(BOOL)a7 searchQueryAssetIds:(struct __CFArray { } *)a8 searchQueryCollectionIds:(struct __CFArray { } *)a9;
+ (id)suggestionGroupsForSearchText:(id)a0 requireExactMatches:(BOOL)a1 leadingAnchored:(BOOL)a2 restrictedIndexCategories:(id)a3 excludedIndexCategories:(id)a4 suggestionResultTypes:(unsigned long long)a5 psiQueryDelegate:(id)a6;
+ (unsigned long long)suggestionPairingTypeForSuggestionOptions:(id)a0;

@end
