@class DESRecordStore, NSString, PMLAWDAvailableSessionsTracker, NSDictionary, PMLTrainingStore;

@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol> {
    DESRecordStore *_fidesStore;
    PMLAWDAvailableSessionsTracker *_availableSessionsTracker;
    NSDictionary *_isMultiLabel;
}

@property (readonly, nonatomic) PMLTrainingStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSingletonWithDirectory:(id)a0;

- (void)deleteSessionsWithBundleID:(id)a0;
- (void)deleteSessionsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (void)_sendStatsToFidesForMultiLabelModel:(id)a0 sessionCount:(unsigned long long)a1 labeledStats:(id)a2;
- (id)planReceivedWithPayload:(id)a0 error:(id *)a1;
- (id)lastTrainingFeaturizationForModelName:(id)a0 andLocale:(id)a1;
- (id)planReceivedWithRecipe:(id)a0 attachments:(id)a1 error:(id *)a2;
- (void)addSessionWithCovariates:(id)a0 label:(long long)a1 sessionDescriptor:(id)a2 spotlightReference:(id)a3 isInternal:(BOOL)a4;
- (void)updateSessionsAndLabelForModel:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_sendStatsToFidesForModel:(id)a0 sessionCount:(unsigned long long)a1 positivesCount:(unsigned long long)a2 negativesCount:(unsigned long long)a3 support:(float)a4;
- (void)trimDbWithDeferralBlock:(id /* block */)a0;
- (BOOL)isMultiLabelModel:(id)a0;
- (void)_deleteAllSavedRecordsFromFidesStoreSync;
- (id)init;
- (void)updateLastTrainingFeaturizationForModel:(id)a0 andData:(id)a1;
- (void)deleteSessionsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (id)initWithStore:(id)a0 fidesStore:(id)a1 availableSessionsTracker:(id)a2;
- (void)sendSessionStatsToFides;
- (id)_trainWithRecipe:(id)a0 chunkData:(id)a1 args:(id)a2 error:(id *)a3;
- (void)availableSessionsStatsReportedToAWD;

@end
