@class NSDictionary, CDPDSecureBackupConfiguration, CDPContext;
@protocol CDPDSecureBackupProxy, CDPDOctagonTrustProxy, CDPStateUIProviderInternal, CDPDSecureBackupDelegate;

@interface CDPDSecureBackupController : NSObject

@property (retain, nonatomic) NSDictionary *cachedAccountInfo;
@property (nonatomic) BOOL fakeNearlyDepletedRecords;
@property (retain, nonatomic) id<CDPDSecureBackupProxy> secureBackupProxy;
@property (retain, nonatomic) id<CDPDOctagonTrustProxy> octagonTrustProxy;
@property (weak, nonatomic) id<CDPDSecureBackupDelegate> delegate;
@property (retain, nonatomic) CDPDSecureBackupConfiguration *configuration;
@property (nonatomic) long long icscRepairTotalRetries;
@property (nonatomic) long long icscRepairRetryDelay;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) id<CDPStateUIProviderInternal> uiProvider;

+ (id)_dateWithSecureBackupDateString:(id)a0;
+ (id)_sanitizedInfoDictionary:(id)a0;
+ (id)_printableAccountInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 secureBackupProxy:(id)a1 octagonTrustProxy:(id)a2;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 delegate:(id)a2;
- (void)synchronizeKeyValueStoreWithCompletion:(id /* block */)a0;
- (void)fetchEscrowRecordsWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchAllEscrowRecordsWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (void)accountInfoWithCompletion:(id /* block */)a0;
- (void)clearAccountInfoCache;
- (id)_accountInfo:(id *)a0;
- (void)isEligibleForCDPWithCompletion:(id /* block */)a0;
- (void)backupRecordsArePresentWithCompletion:(id /* block */)a0;
- (void)getBackupRecordDevicesWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (id)handleCDPDevices:(id)a0;
- (void)_getOctagonEscrowBackupRecordDevicesWithOptionForceFetch:(BOOL)a0 completion:(id /* block */)a1;
- (void)_updateContext:(id)a0 withDevices:(id)a1;
- (void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(id /* block */)a0;
- (void)enableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)a0 completion:(id /* block */)a1;
- (void)checkForExistingRecord:(id /* block */)a0;
- (void)checkForExistingRecordWithPeerId:(id)a0 completion:(id /* block */)a1;
- (void)checkForExistingRecordMatchingPredicate:(id)a0 forceFetch:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)supportsRecoveryKey;
- (void)_enableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_retryRepairWithContext:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)enableSecureBackupWithRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)authenticatedEnableSecureBackupWithRecoveryKey:(id)a0 error:(id *)a1;
- (void)_authenticatedEnableSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_disableThenEnableWithInfo:(id)a0 error:(id *)a1;
- (id)_currentAnisetteData;
- (id)_clientMetadataWithSecretType:(unsigned long long)a0 length:(unsigned long long)a1;
- (id)performEscrowRecoveryWithData:(id)a0 error:(id *)a1;
- (id)performSilentEscrowRecoveryWithCDPContext:(id)a0 error:(id *)a1;
- (BOOL)recordIsEmpty:(id)a0;
- (id)performEscrowRecoveryWithRecoveryContext:(id)a0 error:(id *)a1;
- (void)performEscrowRecoveryWithRecoveryContext:(id)a0 completion:(id /* block */)a1;
- (void)recoverSecureBackupWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_recoverBackupDictionaryWithContext:(id)a0 error:(id *)a1;
- (id)_recoveryInfoDictionaryFromContext:(id)a0;
- (void)deleteAllBackupRecordsWithCompletion:(id /* block */)a0;
- (void)_deleteAllBackupRecordsWithCompletion:(id /* block */)a0;
- (void)deleteSingleICSCBackupWithCompletion:(id /* block */)a0;
- (void)_deleteSingleICSCBackupWithCompletion:(id /* block */)a0;
- (void)disableSecureBackupWithCompletion:(id /* block */)a0;
- (BOOL)_disableSecureBackup:(id *)a0;
- (void)disableRecoveryKeyWithCompletion:(id /* block */)a0;
- (BOOL)_disableRecoveryKey:(id *)a0;

@end
