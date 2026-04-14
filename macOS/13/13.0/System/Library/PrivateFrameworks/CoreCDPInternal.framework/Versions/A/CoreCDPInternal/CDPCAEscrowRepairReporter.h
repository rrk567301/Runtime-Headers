@class NSError;

@interface CDPCAEscrowRepairReporter : CDPCAReporter

@property (nonatomic) BOOL wasSilentEscrowRecordRepairAttempted;
@property (nonatomic) BOOL didSilentEscrowRecordRepairSucceed;
@property (retain, nonatomic) NSError *silentEscrowRecordRepairError;

- (id)init;
- (void).cxx_destruct;

@end
