@class NSMutableDictionary, NSArray, NSMutableArray, FCCKPrivateDatabase;

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *remainingBatchesOfRecordIDsToDelete;
@property (retain, nonatomic) NSMutableArray *resultDeletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) char skipPreflight;
@property (nonatomic) char handleIdentityLoss;
@property (copy, nonatomic) id /* block */ deleteRecordsCompletionBlock;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)resetForRetry;
- (char)validateOperation;
- (void)_continueModifying;

@end
