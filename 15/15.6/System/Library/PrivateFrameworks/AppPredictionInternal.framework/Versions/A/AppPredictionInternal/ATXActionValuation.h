@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (id)init;
- (void).cxx_destruct;
- (id)getCurrentLocation;
- (char)shouldPredictRequestRideIntent:(id)a0;
- (char)shouldPredictCreateEventIntent:(id)a0;
- (char)shouldPredictSendMessageIntent:(id)a0;
- (id)initWithIntentCache:(id)a0;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;
- (char)shouldPredictIntent:(id)a0;

@end
