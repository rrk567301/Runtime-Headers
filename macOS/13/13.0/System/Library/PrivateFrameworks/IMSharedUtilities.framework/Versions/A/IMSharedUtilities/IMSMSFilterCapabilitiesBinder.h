@interface IMSMSFilterCapabilitiesBinder : NSObject

+ (long long)localizeSubAction:(long long)a0;
+ (BOOL)isValidSubAction:(long long)a0 subAction:(long long)a1;
+ (void)executeCompletionBlockForFilterParamsUpdate:(id)a0 promo:(id)a1;
+ (BOOL)firstPartyFilterExtensionActive;
+ (void)IMMetricsCollectorForSMSSubClassification:(unsigned long long)a0;
+ (int)updateFilterParamsBindings:(id)a0 promotionalSubActions:(id)a1;
+ (void)handleSubClassificationFilterChange;

@end
