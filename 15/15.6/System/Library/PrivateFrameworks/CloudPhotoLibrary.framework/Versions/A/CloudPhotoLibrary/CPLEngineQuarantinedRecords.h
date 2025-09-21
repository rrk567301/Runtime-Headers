@class NSString, CPLRejectedRecords, CPLPlatformObject, NSMutableArray;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {
    CPLRejectedRecords *_rejectedRecords;
    unsigned long long _rejectedCount;
    char _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    unsigned long long _newRejectedCount;
    NSMutableArray *_quarantineMessages;
}

@property (class, readonly, nonatomic) unsigned long long quarantineRetryCount;

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)scopeType;
- (char)_addQuarantinedRecordWithScopedIdentifier:(id)a0 related:(char)a1 recordClass:(Class)a2 reason:(id)a3 error:(id *)a4;
- (char)_quarantineRejectedRecords:(id)a0 error:(id *)a1;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)a0 reason:(id)a1;
- (char)addQuarantinedRecordWithScopedIdentifier:(id)a0 recordClass:(Class)a1 reason:(id)a2 error:(id *)a3;
- (char)bumpRejectedRecords:(id)a0 error:(id *)a1;
- (Class)classForQuarantinedRecordWithScopedIdentifier:(id)a0;
- (unsigned long long)countOfQuarantinedRecords;
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)a0;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)isRecordWithScopedIdentifierQuarantined:(id)a0;
- (char)performMaintenanceWithError:(id *)a0;
- (char)removeQuarantinedRecordWithScopedIdentifier:(id)a0 notify:(char)a1 error:(id *)a2;
- (char)resetRejectedRecordsWithError:(id *)a0;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
