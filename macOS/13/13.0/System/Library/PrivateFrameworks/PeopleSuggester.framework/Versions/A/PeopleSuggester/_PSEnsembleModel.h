@class _CDInteractionCache, PPTopicStore, _PSSharingContactRankerModel, NSDictionary, _CDInteractionStore, _PSHeuristics, _PSConfidenceModelForSharing, _PSContactResolver, _PSFTZKWOrchestrator, PPContactStore, NSSet, _PSRuleMiningModel, NSString, _PSFTZKWTrialData, _PSKNNModel, NSUserDefaults, NSArray, CNContactStore, _PSInteractionAndContactMonitor, NSNumber;
@protocol _DKKnowledgeSaving, _DKKnowledgeQuerying;

@interface _PSEnsembleModel : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _PSRuleMiningModel *ruleMiningModel;
@property (retain, nonatomic) _PSSharingContactRankerModel *sharingContactRankerModel;
@property (retain, nonatomic) _PSConfidenceModelForSharing *confidenceModelForSharing;
@property BOOL PSConfidenceModelInUse;
@property BOOL useSyntheticSharingInteractions;
@property (retain, nonatomic) _PSKNNModel *knnModel;
@property (retain, nonatomic) _PSKNNModel *knnMapsModel;
@property (retain, nonatomic) _PSKNNModel *knnZkwModel;
@property (retain, nonatomic) _PSKNNModel *knnNameOrContactRankerModel;
@property (retain, nonatomic) _PSKNNModel *knnSiriNLContactRankerModel;
@property (retain, nonatomic) _PSHeuristics *heuristics;
@property (retain, nonatomic) _PSInteractionAndContactMonitor *contactMonitor;
@property (retain, nonatomic) NSSet *cachedSupportedBundleIDs;
@property (retain, nonatomic) _PSContactResolver *contactResolver;
@property (retain, nonatomic) _PSFTZKWOrchestrator *zkwFTOrchestrator;
@property (retain, nonatomic) _PSFTZKWTrialData *zkwFTTrialData;
@property (nonatomic) BOOL allowNonSupportedBundleIDs;
@property (retain) NSDictionary *psConfig;
@property (retain) NSDictionary *psConfigForAdaptableModel;
@property (retain, nonatomic) id<_DKKnowledgeQuerying, _DKKnowledgeSaving> knowledgeStore;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) PPTopicStore *topicStore;
@property (retain, nonatomic) PPContactStore *portraitContactStore;
@property (retain, nonatomic) _CDInteractionCache *messageInteractionCache;
@property (retain, nonatomic) _CDInteractionCache *shareInteractionCache;
@property (retain, nonatomic) NSArray *groupActivityInteractionCache;
@property (retain, nonatomic) NSUserDefaults *peopleSuggesterDefaults;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSArray *defaultContactKeysToFetch;
@property (retain, nonatomic) NSString *trialID;
@property (retain, nonatomic) NSArray *shareSheetMechanisms;
@property (retain, nonatomic) NSArray *messageDirections;
@property (retain, nonatomic) NSNumber *messageMechanism;

- (id)init;
- (void).cxx_destruct;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;
- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (void)loadDefaultPSConfig;
- (BOOL)loadPSConfig:(id)a0;
- (void)loadDefaultAdaptableModelConfig;
- (void)updateTrialID:(id)a0;
- (BOOL)allowConcurrentReads;
- (id)fetchShareSheetSupportedBundleIDs;
- (void)populateCaches;
- (void)populateCachesWithSupportedBundleIDs:(id)a0;
- (void)refreshCaches;
- (id)predictWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)familyPredictionsWithMaxSuggestions:(unsigned long long)a0 predictionContext:(id)a1;
- (id)predictWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1 contactKeysToFetch:(id)a2;
- (void)addAdaptedModelUsageInfoToSuggestions:(id)a0;
- (void)addUTIInfo:(id)a0 predictionContext:(id)a1;
- (void)addSupportedBundleIDs:(id)a0;
- (id)suggestionsFromSuggestionProxies:(id)a0 supportedBundleIDs:(id)a1 contactKeysToFetch:(id)a2 meContactIdentifier:(id)a3 maxSuggestions:(unsigned long long)a4;
- (BOOL)excludeSuggestionWithConversationId:(id)a0;
- (id)mergedSuggestionsWithFamilySuggestions:(id)a0 shareSheetSuggestions:(id)a1 maxSuggestions:(unsigned long long)a2 supportedBundleIds:(id)a3;
- (id)predictWithMapsPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)rerankMapsSuggestions:(id)a0 usingPredictionContext:(id)a1 contactResolver:(id)a2;
- (id)mapsSuggestionArrayWithArray:(id)a0 appendingUniqueElementsFromArray:(id)a1 contactResolver:(id)a2 meContactId:(id)a3;
- (id)suggestZKWSuggestionsWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (id)_knnZKWSuggestionsWithPredictionContext:(id)a0 modelConfiguration:(id)a1 maxSuggestions:(unsigned long long)a2;
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)a0 contactsOnly:(BOOL)a1 maxSuggestions:(unsigned long long)a2;
- (id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)a0 maxSuggestions:(unsigned long long)a1 interactionId:(id)a2;
- (id)rankedNameSuggestionsWithPredictionContext:(id)a0 name:(id)a1;
- (id)rankedSiriMLCRHandles:(id)a0 context:(id)a1;
- (id)rankedHandlesFromCandidateHandles:(id)a0;
- (id)appExtensionSuggestionsFromContext:(id)a0;

@end
