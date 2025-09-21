@class NSString, NSArray, NSDictionary, CHSingletonMLModel, NSObject;
@protocol OS_dispatch_queue;

@interface CHDocumentLayoutAnalysisModel : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CHSingletonMLModel *_encoderModel;
    CHSingletonMLModel *_decoderModel;
}

@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) unsigned long long encoderBatchSize;
@property (readonly, nonatomic) unsigned long long maxNumStrokes;
@property (readonly, nonatomic) unsigned long long maxNumPointsPerStroke;
@property (readonly, nonatomic) unsigned long long numSignalFeaturesPerPoint;
@property (readonly, nonatomic) unsigned long long encoderDimension;
@property (readonly, nonatomic) unsigned long long decoderDimension;
@property (readonly, nonatomic) float interpolationDistance;
@property (readonly, nonatomic) float coordinateNormalizationFactor;
@property (readonly, nonatomic) long long numOutputClasses;
@property (readonly, nonatomic) long long nontextClassIndex;
@property (readonly, nonatomic) NSArray *scriptCodeMap;
@property (readonly, nonatomic) NSDictionary *scriptCodeDictionary;

+ (long long)maxNumStrokesForDecoderName:(id)a0;
+ (id)scriptCodeMap;

- (void).cxx_destruct;
- (BOOL)analyzeDrawing:(id)a0 outStrokeClassProbabilities:(void *)a1 outStrokeAdjacencyMatrix:(void *)a2 cancellationBlock:(id /* block */)a3;
- (id)initWithEncoderName:(id)a0 decoderName:(id)a1;

@end
