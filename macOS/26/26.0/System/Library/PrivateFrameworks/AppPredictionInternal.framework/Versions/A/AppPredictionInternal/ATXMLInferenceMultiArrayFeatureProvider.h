@class NSString, NSArray, NSSet;

@interface ATXMLInferenceMultiArrayFeatureProvider : NSObject <MLFeatureProvider>

@property (nonatomic) struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[828]; float score; BOOL isMediumConfidenceForBlendingLayer; BOOL isHighConfidenceForBlendingLayer; } predictionItem;
@property (copy, nonatomic) NSArray *featuresToConcatenate;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[828]; float x3; BOOL x4; BOOL x5; } *)a0 featuresToConcatenate:(id)a1;

@end
