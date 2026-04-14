@interface ATXActionFeedbackWeights : NSObject {
    void /* unknown type, blank encoding */ _confirmWeights[8][50];
    void /* unknown type, blank encoding */ _rejectWeights[8][50];
}

+ (id)sharedInstance;

- (float)confirmWeightForFeedbackStage:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
- (id)init;
- (float)rejectWeightForFeedbackStage:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
- (id)initWithAssetClass:(Class)a0;

@end
