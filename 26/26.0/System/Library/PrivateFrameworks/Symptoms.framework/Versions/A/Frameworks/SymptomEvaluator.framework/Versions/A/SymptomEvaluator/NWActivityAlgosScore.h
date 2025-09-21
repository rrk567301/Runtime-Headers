@class NWSAlgosConnectionScore;

@interface NWActivityAlgosScore : NSObject {
    NWSAlgosConnectionScore *_activityScore;
}

+ (id)sharedInstance;
+ (void)processNWActivitySuperMetric:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_processNWActivityTransactions:(id)a0;
- (void)_postSymptomFor:(id)a0 withScore:(unsigned long long)a1;
- (void)_processNWActivitySuperMetric:(id)a0;

@end
