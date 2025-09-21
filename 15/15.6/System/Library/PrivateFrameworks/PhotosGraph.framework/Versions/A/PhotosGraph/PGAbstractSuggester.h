@class PGSuggestionSession, NSIndexSet, NSString, CLSSceneConfidenceThresholdHelper, NSSet;

@interface PGAbstractSuggester : NSObject <PGSuggester> {
    CLSSceneConfidenceThresholdHelper *_suggestableScenesHelper;
    char _prefetchedSharedLibraryState;
    char _isSharedLibraryEnabled;
    NSSet *_sharedLibraryPersonIdentifiers;
}

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (weak, nonatomic) PGSuggestionSession *session;
@property (nonatomic) char lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedLibraryPersonIdentifiersInLibrary:(id)a0 withScope:(id)a1;
+ (id)internalPredicateForProcessedAssetsWithMinimumSceneAnalysisVersion:(unsigned long long)a0;
+ (char)lastSuggestionWasColliding;
+ (id)noVideoPredicate;
+ (void)setLastSuggestionWasColliding:(char)a0;
+ (id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)a0 forMomentNodes:(id)a1 containsUnverifiedPersons:(char *)a2;
+ (id)suggesterWithSession:(id)a0;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (void)_prefetchSharedLibraryStateIfNeeded;
- (char)assetIsValidForSuggesting:(id)a0;
- (char)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (id)defaultAssetFetchOptionsWithInternalPredicate:(id)a0;
- (char)hasSuggestableScenesWithAsset:(id)a0;
- (char)processedAssetIsValidForSuggesting:(id)a0 allowGuestAsset:(char)a1;
- (id)reasonsForSuggestion:(id)a0;
- (id)sharingSuggestionResultsForMomentNodes:(id)a0 withWorkingContext:(id)a1;
- (double)userFeedbackScoreWithAsset:(id)a0;

@end
