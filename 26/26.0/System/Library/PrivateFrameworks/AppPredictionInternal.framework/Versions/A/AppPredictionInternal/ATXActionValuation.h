@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;
- (BOOL)shouldPredictSendMessageIntent:(id)a0;
- (id)init;
- (id)getCurrentLocation;
- (id)initWithIntentCache:(id)a0;
- (BOOL)shouldPredictCreateEventIntent:(id)a0;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (BOOL)shouldPredictIntent:(id)a0;
- (BOOL)shouldPredictRequestRideIntent:(id)a0;
- (void).cxx_destruct;

@end
