@class NSString, CDPContext;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (char)isRecoveryKeySet:(id *)a0;
- (char)verifyRecoveryKey:(id)a0 error:(id *)a1;
- (void)accountInfoWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)_cleanUpPostEscrowCreationStates;
- (char)_createAndRegisterBackupPublicKeyInSOS:(id)a0 error:(id *)a1;
- (id)accountInfoWithInfo:(id)a0 error:(id *)a1;
- (id)activityTypeString;
- (void)cacheRecoveryKey:(id)a0 completionBlock:(id /* block */)a1;
- (char)disableWithInfo:(id)a0 error:(id *)a1;
- (char)enableWithInfo:(id)a0 error:(id *)a1;
- (id)recoverWithInfo:(id)a0 error:(id *)a1;
- (char)removeRecoveryKeyFromSOS:(id *)a0;
- (id)secureBackupContext;
- (id)secureBackupContextWithInfo:(id)a0;
- (char)setRecoveryKeyInSOS:(id)a0 error:(id *)a1;
- (void)uncacheAllSecrets;

@end
