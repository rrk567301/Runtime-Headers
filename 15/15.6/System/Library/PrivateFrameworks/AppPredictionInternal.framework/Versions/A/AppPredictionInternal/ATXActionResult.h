@class ATXScoredPrediction, NSString;

@interface ATXActionResult : NSObject {
    struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[817]; float score; char isMediumConfidenceForBlendingLayer; char isHighConfidenceForBlendingLayer; } _predictionItem;
    char _hasPredictionItem;
}

@property (readonly, nonatomic) ATXScoredPrediction *scoredAction;
@property (readonly, nonatomic) NSString *actionKey;
@property (readonly, nonatomic) const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; } *predictionItem;
@property (readonly, nonatomic) char isSampledResultForLoggingOnly;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initForLoggingWithPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; } *)a0;
- (id)initWithScoredAction:(id)a0 predictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; } *)a1 actionKey:(id)a2;
- (void)setPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; char x4; char x5; } *)a0;

@end
