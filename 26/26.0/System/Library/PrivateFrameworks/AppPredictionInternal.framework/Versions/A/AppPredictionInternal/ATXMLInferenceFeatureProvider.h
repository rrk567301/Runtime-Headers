@class NSString, NSSet;

@interface ATXMLInferenceFeatureProvider : NSObject <MLFeatureProvider>

@property (nonatomic) struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[828]; float score; BOOL isMediumConfidenceForBlendingLayer; BOOL isHighConfidenceForBlendingLayer; } predictionItem;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[828]; float x3; BOOL x4; BOOL x5; } *)a0;

@end
