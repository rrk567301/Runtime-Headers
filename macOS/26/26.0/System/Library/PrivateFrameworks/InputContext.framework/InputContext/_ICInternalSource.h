@class NSString;

@interface _ICInternalSource : NSObject <_ICPredictionSourcing> {
    NSString *_name;
}

- (void)warmUp;
- (void)hibernate;
- (id)localizedStringForKey:(id)a0 withLocale:(id)a1;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;
- (BOOL)doesSupportTriggerSourceType:(unsigned char)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (id)init;
- (id)name;
- (void)predictedItemsWithProactiveTrigger:(id)a0 searchContext:(id)a1 limit:(unsigned long long)a2 timeoutInMilliseconds:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
