@class NSSet, NSDictionary, NSMutableDictionary, CHStrokeGroupingResult, CHStrokeClassificationResult, NSMutableSet;

@interface CHGroupingAndRecognitionResults : NSObject {
    NSMutableDictionary *_intermediateCachedRecognitionResults;
    NSMutableDictionary *_refreshedCachedResultsFromPostProcessing;
    CHStrokeGroupingResult *_strokeGroupingResult;
    NSDictionary *_recognitionResultsByGroupID;
    CHStrokeClassificationResult *_strokeClassificationResult;
    CHStrokeGroupingResult *_previousProcessedStrokeGroupingResult;
    NSMutableSet *__intermediateStrokeGroups;
    NSMutableDictionary *__intermediateRecognitionResults;
}

@property (readonly, nonatomic) CHStrokeGroupingResult *strokeGroupingResult;
@property (readonly, nonatomic) NSDictionary *recognitionResultsByGroupID;
@property (readonly, nonatomic) CHStrokeClassificationResult *strokeClassificationResult;
@property (readonly, nonatomic) CHStrokeGroupingResult *previousProcessedStrokeGroupingResult;
@property (readonly, nonatomic) NSSet *strokeGroupReplacements;
@property (readonly, nonatomic) NSDictionary *cachedRecognitionResultsFromPostProcessing;

- (void).cxx_destruct;
- (id)initWithGroupingResult:(id)a0 recognitionResultsByGroupID:(id)a1 strokeClassificationResult:(id)a2 previousProcessedStrokeGroupingResult:(id)a3 strokeGroupReplacements:(id)a4 cachedRecognitionResultsFromPostProcessing:(id)a5;
- (id)refreshedCachedResultsFromPostProcessing;

@end
