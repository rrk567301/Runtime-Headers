@interface PCVisitHistoryPredictorConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestepSizeMinutes;
@property (nonatomic) int inputSequenceLength;
@property (nonatomic) double visitProbabilityThreshold;
@property (nonatomic) int numVisitsThreshold;
@property (nonatomic) int hiddenLayers;
@property (nonatomic) int outSteps;
@property (nonatomic) int epochs;
@property (nonatomic) int batchSize;
@property (nonatomic) BOOL trainOnGpu;
@property (nonatomic) double loiEncodingTimeoutSeconds;
@property (nonatomic) BOOL logTrainingDebugOutputs;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestepSize:(double)a0 inputSeqLength:(int)a1 visitProbabilityThreshold:(double)a2 hiddenLayers:(int)a3 outSteps:(int)a4 epochs:(int)a5 encodingTimeout:(double)a6 numVisitsThreshold:(int)a7 batchSize:(int)a8 trainOnGpu:(BOOL)a9 logTrainingDebugOutputs:(BOOL)a10;

@end
