@class NSArray;

@interface WBSRetryableCKModifyRecordZonesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (copy, nonatomic) id /* block */ perRecordZoneSaveBlock;
@property (copy, nonatomic) id /* block */ perRecordZoneDeleteBlock;
@property (copy, nonatomic) id /* block */ modifyRecordZonesCompletionBlock;

- (void).cxx_destruct;
- (void)_setUpOperation:(id)a0;
- (id)_makeOperation;

@end
