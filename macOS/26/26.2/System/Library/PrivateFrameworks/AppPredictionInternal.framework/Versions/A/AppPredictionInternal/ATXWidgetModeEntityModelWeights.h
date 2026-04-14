@class NSDictionary, ATXModeEntityTrialClientWrapper;

@interface ATXWidgetModeEntityModelWeights : NSObject {
    NSDictionary *_widgetModeEntityModelWeights;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}

- (id)abGroup;
- (void).cxx_destruct;
- (id)init;
- (double)classConditionalProbability;
- (double)globalPopularity;
- (double)modePopularity;
- (int)numOfDays;
- (double)posteriorProbability;
- (double)weightForWidgetProbability;

@end
