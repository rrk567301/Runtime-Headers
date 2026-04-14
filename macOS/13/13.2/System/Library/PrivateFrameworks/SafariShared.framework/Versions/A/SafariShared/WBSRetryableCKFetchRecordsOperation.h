@class NSArray;

@interface WBSRetryableCKFetchRecordsOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ perRecordProgressBlock;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;

- (void).cxx_destruct;
- (void)_setUpOperation:(id)a0;
- (id)_makeOperation;

@end
