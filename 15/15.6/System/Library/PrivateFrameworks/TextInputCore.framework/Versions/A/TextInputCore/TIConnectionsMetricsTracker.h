@interface TIConnectionsMetricsTracker : NSObject

@property char inputContextDidChange;

+ (id)sharedInstance;

- (void)trackPredictionEngagmentWithConversion:(char)a0 age:(unsigned long long)a1 fieldType:(id)a2 resultType:(id)a3 fromBundleId:(id)a4 targetApp:(id)a5 linguistic:(char)a6 semantic:(char)a7;
- (void)trackTextFieldEntryWithEmpty:(char)a0 fieldType:(id)a1 linguistic:(char)a2 semantic:(char)a3 requestType:(id)a4;
- (void)trackTextFieldEntryWithEmpty:(char)a0 fieldType:(id)a1 trigger:(id)a2;

@end
