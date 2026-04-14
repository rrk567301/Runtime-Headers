@class NSTimeZone, _TtC28PCNeuralNetworkSupportBridge16PCNeuralNetModel, NSMutableDictionary, PCVisitHistoryPredictorConfig;

@interface PCVisitHistoryPredictor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _TtC28PCNeuralNetworkSupportBridge16PCNeuralNetModel *model;
@property (retain, nonatomic) _TtC28PCNeuralNetworkSupportBridge16PCNeuralNetModel *candidateModel;
@property (retain, nonatomic) PCVisitHistoryPredictorConfig *config;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSMutableDictionary *visitIndicies;
@property (retain, nonatomic) NSMutableDictionary *loiToLocationMap;
@property (retain, nonatomic) NSMutableDictionary *loiToHomeMap;
@property (retain, nonatomic) NSMutableDictionary *loiToWorkMap;
@property (retain, nonatomic) NSTimeZone *candidateTimeZone;
@property (retain, nonatomic) NSMutableDictionary *candidateVisitIndicies;
@property (retain, nonatomic) NSMutableDictionary *candidateLoiToLocationMap;
@property (retain, nonatomic) NSMutableDictionary *candidateLoiToHomeMap;
@property (retain, nonatomic) NSMutableDictionary *candidateLoiToWorkMap;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)interruptTraining;
- (BOOL)hasTrainedModel;
- (void)computeWithHistory:(id)a0 transitions:(id)a1 locationsOfInterest:(id)a2 homekitHomes:(id)a3 atTime:(double)a4 inTimeZone:(id)a5 withError:(id *)a6;
- (void)findMismatchedTrainedLois:(id *)a0 visitHistory:(id)a1;
- (void)predictWithHistory:(id)a0 transitionHistory:(id)a1 locationHistory:(id)a2 homekitHomes:(id)a3 atTime:(double)a4 locations:(id *)a5 transitions:(id *)a6 containsHomeKitPredictions:(id *)a7 missingLoiResults:(id *)a8;
- (void)purgeModel;
- (void)storeHomeLoisTo:(id)a0 workLoisTo:(id)a1 from:(id)a2 withVisitIndices:(id)a3;

@end
