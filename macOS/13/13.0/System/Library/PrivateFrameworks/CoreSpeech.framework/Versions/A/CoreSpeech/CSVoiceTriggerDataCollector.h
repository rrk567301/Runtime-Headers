@interface CSVoiceTriggerDataCollector : NSObject

+ (id)sharedInstance;

- (id)fetchVoiceTriggerHeartBeatMetrics;
- (void)addVTRejectEntry:(id)a0 truncateData:(BOOL)a1;
- (void)addVTAcceptEntryAndSubmit:(id)a0;

@end
