@class NSArray;

@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultSavedRecords;
@property (copy, nonatomic) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic) BOOL canBypassEncryptionRequirement;
@property (copy, nonatomic) id /* block */ saveRecordsCompletionBlock;

- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
