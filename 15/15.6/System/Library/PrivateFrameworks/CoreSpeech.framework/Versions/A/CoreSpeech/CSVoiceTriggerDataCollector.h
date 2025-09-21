@interface CSVoiceTriggerDataCollector : NSObject

+ (id)sharedInstance;

- (void)addVTAcceptEntryAndSubmit:(id)a0;
- (void)addVTRejectEntry:(id)a0 truncateData:(char)a1;
- (id)fetchVoiceTriggerHeartBeatMetrics;

@end
