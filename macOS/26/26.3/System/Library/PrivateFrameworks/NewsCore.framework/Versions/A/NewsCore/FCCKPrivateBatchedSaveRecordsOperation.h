@class NSMutableDictionary, NSArray, NSMutableArray, FCCKPrivateDatabase;

@interface FCCKPrivateBatchedSaveRecordsOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *remainingBatchesOfRecordsToSave;
@property (retain, nonatomic) NSMutableArray *resultSavedRecords;
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic) BOOL skipPreflight;
@property (nonatomic) long long identityLossResponse;
@property (copy, nonatomic) id /* block */ saveRecordsCompletionBlock;

- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)init;
- (void)resetForRetry;
- (void).cxx_destruct;
- (void)_continueModifying;
- (void)_subdivideRemainingBatches;

@end
