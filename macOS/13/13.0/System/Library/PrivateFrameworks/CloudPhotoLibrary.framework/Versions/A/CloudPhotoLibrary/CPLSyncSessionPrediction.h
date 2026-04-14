@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}

- (id)description;
- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithPredictedValuesAndTypes:(id)a0;
- (id)predictedValueForType:(id)a0;
- (id)updatedPredictionWithValuesAndTypes:(id)a0;
- (void)updateXPCActivity:(id)a0;
- (void)updateXPCActivityCriteria:(id)a0;
- (BOOL)matchesXPCActivity:(id)a0;
- (BOOL)_oldPredictionWithKey:(const char *)a0 inCriteria:(id)a1 matchesPredictionWithKey:(id)a2;
- (BOOL)matchesXPCActivityCriteria:(id)a0;

@end
