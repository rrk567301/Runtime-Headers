@class NSSet, NSDictionary, NSMutableSet, CHStrokeGroupingResult, CHStrokeClassificationResult, NSMutableDictionary;

@interface CHGroupingAndRecognitionResults : NSObject {
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

- (void).cxx_destruct;
- (id)initWithGroupingResult:(id)a0 recognitionResultsByGroupID:(id)a1 strokeClassificationResult:(id)a2 previousProcessedStrokeGroupingResult:(id)a3 strokeGroupReplacements:(id)a4;

@end
