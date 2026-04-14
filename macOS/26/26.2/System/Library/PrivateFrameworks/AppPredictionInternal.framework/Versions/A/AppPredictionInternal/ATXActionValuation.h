@class ATXIntentMetadataCache;

@interface ATXActionValuation : NSObject {
    ATXIntentMetadataCache *_intentCache;
}

- (BOOL)shouldPredictCreateEventIntent:(id)a0;
- (id)getCurrentLocation;
- (void)setFeatureValuesAndFilterPredictableActions:(id)a0 actionStatistics:(id)a1;
- (void)scoreActions:(id)a0 scoreLogger:(id)a1 consumerSubType:(unsigned char)a2;
- (BOOL)shouldPredictRequestRideIntent:(id)a0;
- (id)initWithIntentCache:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldPredictSendMessageIntent:(id)a0;
- (BOOL)shouldPredictIntent:(id)a0;
- (id)init;

@end
