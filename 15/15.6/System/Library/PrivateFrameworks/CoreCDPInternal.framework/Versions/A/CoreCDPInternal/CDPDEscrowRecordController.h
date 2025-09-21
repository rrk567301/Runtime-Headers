@class CDPDCircleController, CDPDSecureBackupController, AAFKeychainManager, CDPContext;
@protocol CDPDCircleProxy, CDPDSecureBackupProxy, CDPDOctagonTrustProxy;

@interface CDPDEscrowRecordController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate>

@property (readonly, nonatomic) AAFKeychainManager *keychainManager;
@property (readonly, nonatomic) CDPDCircleController *circleController;
@property (readonly, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly, nonatomic) id<CDPDOctagonTrustProxy> octagonTrustProxy;
@property (readonly, nonatomic) id<CDPDSecureBackupProxy> secureBackupProxy;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)performSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (void)shouldPerformSilentEscrowRecordRepairUsingCache:(char)a0 completion:(id /* block */)a1;
- (char)updateLastSilentEscrowRecordRepairAttemptDate:(id)a0 error:(id *)a1;
- (void)_beginSilentEscrowRecordRepairWithState:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_cdpStateMachineWithNilUIProvider;
- (void)_checkAllRecordsForCurrentDeviceUsingCache:(char)a0 completion:(id /* block */)a1;
- (void)_checkFirstUsableRecordForDeviceFromSource:(long long)a0 completion:(id /* block */)a1;
- (char)_clearLastEscrowRepairAttemptDate:(id *)a0;
- (unsigned long long)_combinedCircleStatusUsingCache:(char)a0 error:(id *)a1;
- (void)_continueSilentEscrowRecordRepairWithState:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_determineEligibilityForSilentRepairWithCompletion:(id /* block */)a0;
- (void)_deviceEscrowRecordStateUsingAccountsHealthCheckCache:(id /* block */)a0;
- (void)_deviceEscrowRecordStateUsingCache:(char)a0 completion:(id /* block */)a1;
- (id)_escrowRecordHealthCheckFailureCountForAccount:(id)a0;
- (void)_escrowRecordStateForDevice:(id)a0 usingCache:(char)a1 completion:(id /* block */)a2;
- (void)_fetchAllEscrowRecordsFromSource:(long long)a0 completion:(id /* block */)a1;
- (id)_firstUsableRecordForCurrentPeerWithSerialNumber:(id)a0 fromRecords:(id)a1;
- (id)_getAccountRepresentationForAltDSID:(id)a0;
- (id)_getAppleAccountForAltDSID:(id)a0;
- (char)_isEligibleForEscrowRecordOperationsWithError:(id *)a0;
- (char)_isEscrowRecordRepairPermitted;
- (id)_lastEscrowRepairAttemptDate:(id *)a0;
- (id)_lastEscrowRepairAttemptDateDescriptor;
- (void)_performSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (char)_setLastEscrowRepairAttemptDate:(id)a0 error:(id *)a1;
- (void)_shouldPerformSilentEscrowRecordRepairUsingCache:(char)a0 completion:(id /* block */)a1;
- (char)_shouldPerformSilentRepairForEscrowRecordState:(unsigned long long)a0;
- (void)_tlkRecoveryViewsForRecord:(id)a0 usingCache:(char)a1 completion:(id /* block */)a2;
- (void)circleController:(id)a0 secureBackupRecordsArePresentWithCompletion:(id /* block */)a1;
- (id)circlePeerIDForSecureBackupController:(id)a0;
- (id)contextForController:(id)a0;
- (void)generateEscrowRecordStatusReportForLocalDeviceUsingCache:(char)a0 withCompletion:(id /* block */)a1;
- (void)generateEscrowRecordStatusReportForLocalDeviceUsingFetchSource:(long long)a0 withCompletion:(id /* block */)a1;
- (id)initWithContext:(id)a0 circleProxy:(id)a1 octagonTrustProxy:(id)a2 secureBackupProxy:(id)a3;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)a0;
- (void)promptForLocalSecretWithCompletion:(id /* block */)a0;
- (id)secureChannelContextForController:(id)a0;
- (char)synchronizeCircleViewsForSecureBackupContext:(id)a0;

@end
