@class NSUUID, RTDistanceCalculator, RTInferredMapItemFuserParameters, RTInferredMapItemDeduper, RTLearnedLocationStore;

@interface RTInferredMapItemFuser : NSObject

@property (retain, nonatomic) RTInferredMapItemDeduper *deduper;
@property (readonly, nonatomic) NSUUID *placeholderUUID;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTInferredMapItemFuserParameters *parameters;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;

- (id)subtractMaxLogarithmFromLogProbMap:(id)a0 error:(id *)a1;
- (id)initWithDistanceCalculator:(id)a0 parameters:(id)a1 learnedLocationStore:(id)a2;
- (id)filterCandidates:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)snapToBestAOICandidate:(id)a0 error:(id *)a1;
- (BOOL)updateNonAoiUUIDToLogProbMap:(id)a0 nonBluePOIDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (id)filterLearnedPlaceCandidates:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2;
- (id)snapToBestKnownPlaceType:(id)a0 error:(id *)a1;
- (BOOL)initializeEntriesForNonAoiDedupedInferredMapItems:(id)a0 aoiDedupedInferredMapItems:(id)a1 nonAoiUUIDToLogProbMap:(id *)a2 aoiUUIDToProbArrayMap:(id *)a3 error:(id *)a4;
- (id)fusedInferredMapItemsUsingCandidates:(id)a0 referenceLocation:(id)a1 snapToBestKnownPlace:(BOOL)a2 snapToBestAoi:(BOOL)a3 error:(id *)a4;
- (BOOL)updateAoiUUIDToProbArrayMap:(id)a0 aoiDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (id)populateMapItemSourceEntriesForDedupedInferredMapItems:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)updateNonAoiUUIDToLogProbMap:(id)a0 bluePOIDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (id)preprocessCandidates:(id)a0 referenceLocation:(id)a1 snapToBestKnownPlace:(BOOL)a2 snapToBestAoi:(BOOL)a3 error:(id *)a4;
- (id)init;
- (double)logSumExpOfLogProbMap:(id)a0 error:(id *)a1;
- (BOOL)partitionDedupedInferredMapItems:(id)a0 intoNonAoiDedupedInferredMapItems:(id *)a1 aoiDedupedInferredMapItems:(id *)a2 error:(id *)a3;
- (id)bestFromFusedInferredMapItems:(id)a0;
- (BOOL)highIntentionSource:(unsigned long long)a0;
- (BOOL)updateNonAoiUUIDToLogProbMap:(id)a0 nonAoiDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (id)fusedInferredMapItemsFromUUIDToProbMap:(id)a0 inferredMapItemDeduperState:(id)a1 uuidToFusedMapItemSourceMap:(id)a2 referenceLocation:(id)a3 error:(id *)a4;
- (id)normalizeNonAoiUUIDToLogProbMap:(id)a0 aoiUUIDToProbArrayMap:(id)a1 error:(id *)a2;
- (id)filterUnknownLearnedPlaceCandidates:(id)a0;
- (id)highestConfidenceAoiMapItemFromFusedInferredMapItems:(id)a0;
- (id)boostHighUserIntentionConfidences:(id)a0 candidates:(id)a1 referenceLocation:(id)a2 error:(id *)a3;

@end
