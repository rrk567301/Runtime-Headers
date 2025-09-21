@interface NoOpErrorAnalyzer : NSObject <SyncErrorAnalyzing>

- (long long)responseForError:(id)a0 attempt:(long long)a1 retryInterval:(id *)a2;
- (char)wasMissingKeys:(id)a0;
- (char)wasUnknownItem:(id)a0;
- (id)errorsFromPartialFailure:(id)a0;
- (char)isCKErrorPartialFailure:(id)a0;
- (char)wasAssetNotAvailable:(id)a0;
- (char)wasBatchFailure:(id)a0;
- (char)wasBatchSizeFailure:(id)a0;
- (char)wasDuplicateRecordFound:(id)a0;
- (char)wasOutOfSyncConditionsInError:(id)a0;
- (char)wasQuotaExceededInError:(id)a0;
- (char)wasRecordAlreadyChanged:(id)a0;
- (char)wasRecordArchived:(id)a0;
- (char)wasRecordSizeFailure:(id)a0;
- (char)wasTokenExpired:(id)a0;
- (char)wasZoneDeletedByUserInError:(id)a0;
- (char)wasZoneNotCreated:(id)a0;
- (char)wasZoneNotFound:(id)a0;

@end
