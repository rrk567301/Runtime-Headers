@class NSMutableDictionary;

@interface PGAssetsWithReasonPrecisionRecallEvaluation : PGPrecisionRecallEvaluation

@property (retain, nonatomic) NSMutableDictionary *evaluationByReason;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 category:(id)a1;
- (void)evaluateWithGroundTruthResults:(id)a0 inferenceResults:(id)a1 reasonResultByAssetIdentifier:(id)a2;

@end
