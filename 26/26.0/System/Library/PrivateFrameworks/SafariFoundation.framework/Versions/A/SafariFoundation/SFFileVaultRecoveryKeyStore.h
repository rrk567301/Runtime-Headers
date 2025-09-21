@class NSString, NSArray, SFFileVaultRecoveryKeySaveRequest, NSError, SFFileVaultRecoveryKey;

@interface SFFileVaultRecoveryKeyStore : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_listenerProxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)deleteRecoveryKeyForVolumeID:(NSString *)a0 serialNumber:(NSString *)a1 completion:(void (^)(NSError *))a2;
- (void)recoveryKeyForVolumeID:(NSString *)a0 serialNumber:(NSString *)a1 completion:(void (^)(SFFileVaultRecoveryKey *, NSError *))a2;
- (void)recoveryKeysForSerialNumber:(NSString *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)saveRecoveryKeyWithRequest:(SFFileVaultRecoveryKeySaveRequest *)a0 completion:(void (^)(NSError *))a1;

@end
