@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}

@property (class, readonly, nonatomic) double maximumSignificantTimeInterval;

- (id)updatedPredictionRemovingValueForType:(id)a0;
- (id)predictedDateForType:(id)a0;
- (id)initWithPredictedValuesAndTypes:(id)a0;
- (id)descriptionWithNow:(id)a0;
- (id)description;
- (id)predictedValueForType:(id)a0;
- (id)updatedPredictionWithValuesAndTypes:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (double)timeIntervalSincePredictedDateForType:(id)a0;
- (id)redactedDescription;
- (id)init;

@end
