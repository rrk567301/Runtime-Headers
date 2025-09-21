@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultSavedRecordZones;
@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (nonatomic) char canBypassEncryptionRequirement;
@property (copy, nonatomic) id /* block */ saveRecordZonesCompletionBlock;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (char)validateOperation;

@end
