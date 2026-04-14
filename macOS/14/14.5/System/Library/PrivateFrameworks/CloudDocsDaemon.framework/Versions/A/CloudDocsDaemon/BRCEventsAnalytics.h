@interface BRCEventsAnalytics : NSObject

+ (id)sharedAnalytics;

- (void)_sendDictionaryToCoreAnalytics:(id)a0 eventName:(id)a1;
- (void)registerAndSendNewApplyFailureWithOutcome:(id)a0;
- (void)registerAndSendNewContainerResetWithOutcome:(id)a0;
- (void)registerAndSendNewFolderSharePCSChainingTime:(double)a0 chainedRecordsCount:(id)a1 zoneMangledID:(id)a2 itemIDString:(id)a3 error:(id)a4 analyticsReporter:(id)a5;
- (void)registerAndSendNewPeriodicSyncWithOutcome:(id)a0;
- (void)registerAndSendNewShareAcceptationWithLastStep:(id)a0 zoneMangledID:(id)a1 itemIDString:(id)a2 error:(id)a3 analyticsReporter:(id)a4;

@end
