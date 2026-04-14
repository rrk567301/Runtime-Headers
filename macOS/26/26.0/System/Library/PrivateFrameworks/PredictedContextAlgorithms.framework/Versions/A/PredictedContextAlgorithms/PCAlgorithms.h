@class PCDynamicsWeighting, PCAlgorithmsConfig, PCWorkoutPrediction, PCOutOfPatternLogic, NSNumber, PCVisitHistoryPredictor;

@interface PCAlgorithms : NSObject

@property (retain, nonatomic) PCVisitHistoryPredictor *visitHistoryPred;
@property (retain, nonatomic) PCWorkoutPrediction *workoutPrediction;
@property (retain, nonatomic) PCOutOfPatternLogic *outOfPatternLogic;
@property (retain, nonatomic) PCDynamicsWeighting *dynamicsWeighting;
@property (retain) NSNumber *lastComputeDate;
@property (retain) NSNumber *currentComputeDate;
@property (retain, nonatomic) PCAlgorithmsConfig *config;

- (BOOL)interruptComputeWithError:(id *)a0;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyAlgorithmState:(id)a0 outError:(id *)a1;
- (BOOL)predictContextWithInputSignals:(id)a0 result:(id *)a1 outError:(id *)a2;
- (BOOL)retrieveAlgorithmState:(id *)a0 outError:(id *)a1;
- (void)_initVisitHistoryAndOutOfPattern;
- (BOOL)computeWithInputSignals:(id)a0 outError:(id *)a1;
- (BOOL)retrieveWorkoutClusters:(id *)a0 outError:(id *)a1;

@end
