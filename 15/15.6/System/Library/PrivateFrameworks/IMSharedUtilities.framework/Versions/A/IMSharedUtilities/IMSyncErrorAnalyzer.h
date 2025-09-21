@interface IMSyncErrorAnalyzer : NSObject

+ (id)sharedInstance;

- (char)CKPartialError:(id)a0 hasErrorCode:(id)a1;
- (char)CKPartialError:(id)a0 onlyHasErrorCodes:(id)a1;
- (char)errorIndicatesBatchSizeFailure:(id)a0;
- (id)_errorsFromPartialError:(id)a0;
- (char)_isCKErrorPartialFailure:(id)a0;
- (char)acceptableErrorCodeWhileDeleting:(id)a0;
- (unsigned long long)calculateDelay:(unsigned long long)a0 forAttempt:(unsigned long long)a1 maxInterval:(unsigned long long)a2;
- (char)errorIndicatesAssetWasNotAvailable:(id)a0;
- (char)errorIndicatesBatchFailure:(id)a0;
- (char)errorIndicatesDeviceConditionsDontAllowSync:(id)a0;
- (char)errorIndicatesDeviceDoesNotHaveKeysToSync:(id)a0;
- (char)errorIndicatesDuplicateRecordWasFound:(id)a0;
- (char)errorIndicatesIdentityWasLost:(id)a0;
- (char)errorIndicatesItemWasUnknown:(id)a0;
- (char)errorIndicatesMaxAttemptsFailed:(id)a0;
- (char)errorIndicatesQuotaExceeded:(id)a0;
- (char)errorIndicatesRecordSizeFailure:(id)a0;
- (char)errorIndicatesRecordWasAlreadyChanged:(id)a0;
- (char)errorIndicatesRecordWasArchived:(id)a0;
- (char)errorIndicatesTokenWasExpired:(id)a0;
- (char)errorIndicatesUserDeletedZone:(id)a0;
- (char)errorIndicatesZoneNotCreated:(id)a0;
- (char)errorIndicatesZoneNotFound:(id)a0;
- (id)extractRecordIDsDeletedFromCKPartialError:(id)a0;
- (id)extractRecordIDsNotFoundFromCKPartialError:(id)a0;
- (long long)responseForError:(id)a0 attempt:(unsigned long long)a1 retryInterval:(id *)a2;

@end
