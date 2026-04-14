@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}

@property (class, readonly, nonatomic) double maximumSignificantTimeInterval;

- (id)updatedPredictionRemovingValueForType:(id)a0;
- (id)updatedPredictionWithValuesAndTypes:(id)a0;
- (id)predictedValueForType:(id)a0;
- (id)predictedDateForType:(id)a0;
- (id)description;
- (double)timeIntervalSincePredictedDateForType:(id)a0;
- (id)init;
- (id)descriptionWithNow:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictedValuesAndTypes:(id)a0;
- (id)redactedDescription;

@end
