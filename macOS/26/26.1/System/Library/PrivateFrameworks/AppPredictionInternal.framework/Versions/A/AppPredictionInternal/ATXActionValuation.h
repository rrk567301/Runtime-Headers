@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (BOOL)shouldPredictSendMessageIntent:(id)a0;
- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;
- (id)getCurrentLocation;
- (void).cxx_destruct;
- (BOOL)shouldPredictIntent:(id)a0;
- (id)initWithIntentCache:(id)a0;
- (BOOL)shouldPredictCreateEventIntent:(id)a0;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (BOOL)shouldPredictRequestRideIntent:(id)a0;
- (id)init;

@end
