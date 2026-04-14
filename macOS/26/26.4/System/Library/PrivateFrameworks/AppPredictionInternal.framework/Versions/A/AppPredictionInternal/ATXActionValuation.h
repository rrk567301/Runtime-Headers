@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (BOOL)shouldPredictIntent:(id)a0;
- (BOOL)shouldPredictRequestRideIntent:(id)a0;
- (id)initWithIntentCache:(id)a0;
- (id)getCurrentLocation;
- (BOOL)shouldPredictCreateEventIntent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (BOOL)shouldPredictSendMessageIntent:(id)a0;
- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;

@end
