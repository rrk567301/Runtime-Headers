@interface PowerUIMLPhonePredictor : PowerUIMLTwoStageModelPredictor

- (void)classifierModelUpdateComplete:(id)a0 withModelURL:(id)a1;
- (id)getClassifierFeatureProviderForHistoricEvents:(id)a0;
- (id)getEngagementStreamEvents:(id)a0 forDataVersion:(unsigned long long)a1;
- (id)getInputFeatures:(double)a0 events:(id)a1 pluginBatteryLevel:(unsigned long long)a2 timeFromPlugin:(double)a3 pluginDate:(id)a4 withLog:(id)a5;
- (id)getMultiArrayForFeatureDict:(id)a0;
- (id)getRegressorFeatureProviderForHistoricEvents:(id)a0;
- (int)modelDataVersion;
- (void)regressorModelUpdateComplete:(id)a0 withModelURL:(id)a1;
- (void)updateClassifierModelWithNewData:(id)a0 forDataVersion:(unsigned long long)a1 withModelURL:(id)a2;
- (void)updateRegressorModelWithNewData:(id)a0 forDataVersion:(unsigned long long)a1 withModelURL:(id)a2;

@end
