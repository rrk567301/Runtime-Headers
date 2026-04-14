@interface PLInitialSuggestionRanker : NSObject

+ (id)_candidateBucketsForCandidates:(id)a0 suggestionLimit:(unsigned long long)a1 maxNumberOfSuggestionsPerContentType:(unsigned long long)a2;
+ (BOOL)_candidateHasLastUsedDateOfToday:(id)a0 calendar:(id)a1 todayDateComponents:(id)a2 calendarUnits:(unsigned long long)a3;
+ (void)_populateBuckets:(id)a0 candidates:(id)a1 shouldTryToExcludeCandidatesUsedToday:(BOOL)a2 suggestionLimit:(unsigned long long)a3;
+ (unsigned long long)candidateSimilarityToOtherCandidate:(id)a0 otherCandidate:(id)a1;
+ (id)rankSearchSuggestionCandidates:(id)a0 suggestionLimit:(unsigned long long)a1 maxNumberOfSuggestionsPerContentType:(unsigned long long)a2;
+ (id)trimmedListCandidatesOfCandidatesFromCandidates:(id)a0 maxNumberOfSuggestionsPerContentType:(unsigned long long)a1;

@end
