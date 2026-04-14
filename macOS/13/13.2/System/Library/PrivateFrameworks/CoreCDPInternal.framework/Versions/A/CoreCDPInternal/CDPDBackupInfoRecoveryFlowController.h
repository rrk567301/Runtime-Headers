@class NSArray;
@protocol CDPDBackupRecoveryErrorProvider, CDPDBackupRecoveryResultsParser;

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController

@property (retain, nonatomic) NSArray *recoveryRecords;
@property (retain, nonatomic) id<CDPDBackupRecoveryResultsParser> resultParser;
@property (retain, nonatomic) id<CDPDBackupRecoveryErrorProvider> errorProvider;

- (void).cxx_destruct;
- (BOOL)secretValidator:(id)a0 shouldContinueValidationAfterError:(id)a1;
- (void)secretValidator:(id)a0 didFailRecoveryWithErrors:(id)a1 completion:(id /* block */)a2;
- (void)retrieveInflatedDevices:(id /* block */)a0;
- (void)beginRecoveryWithCompletion:(id /* block */)a0;
- (id)_recoveryListFromDevices:(id)a0;
- (void)_updateRecordRecoveryStatusForRecordDictionary:(id)a0;

@end
