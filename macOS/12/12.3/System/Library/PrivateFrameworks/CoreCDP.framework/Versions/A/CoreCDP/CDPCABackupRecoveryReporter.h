@interface CDPCABackupRecoveryReporter : CDPCAReporter {
    unsigned long long _attemptedMethods;
    unsigned long long _availableMethods;
    long long _escrowDeviceCount;
}

- (id)initWithContext:(id)a0;
- (void)backupRecoverySetAttemptedMethod:(unsigned long long)a0;
- (void)backupRecoveryDidSucceed;
- (void)backupRecoveryDidSucceedWithoutLocalSecret;
- (void)backupRecoveryDidCancel;
- (void)backupRecoveryDidReset;
- (void)backupRecoverySetJoinFromBundleID:(id)a0;
- (void)backupRecoveryDidFailWithError:(id)a0;

@end
