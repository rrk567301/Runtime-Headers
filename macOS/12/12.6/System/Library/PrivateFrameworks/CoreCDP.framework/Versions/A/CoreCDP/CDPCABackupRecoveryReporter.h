@interface CDPCABackupRecoveryReporter : CDPCAReporter {
    unsigned long long _attemptedMethods;
    unsigned long long _availableMethods;
    unsigned long long _escrowDeviceCount;
    unsigned long long _joinMethod;
}

@property (readonly, nonatomic) unsigned long long joinMethod;

- (id)initWithContext:(id)a0;
- (void)backupRecoverySetAttemptedMethod:(unsigned long long)a0;
- (void)backupRecoveryDidSucceed;
- (void)backupRecoveryDidSucceedWithoutLocalSecret;
- (void)backupRecoveryDidCancel;
- (void)backupRecoveryDidReset;
- (void)backupRecoverySetJoinFromBundleID:(id)a0;
- (void)backupRecoveryDidFailWithError:(id)a0;

@end
