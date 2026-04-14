@class NSMutableArray;

@interface ATXInferredModesAccumulator : NSObject {
    NSMutableArray *_inferredModeStartingEvents;
    NSMutableArray *_usageInsightsInferredModeEvents;
}

- (void).cxx_destruct;
- (id)init;
- (void)recordInferredModeEndEvent:(id)a0;
- (void)recordInferredModeStartEvent:(id)a0;
- (id)usageInsightsInferredATXModeEvents;

@end
