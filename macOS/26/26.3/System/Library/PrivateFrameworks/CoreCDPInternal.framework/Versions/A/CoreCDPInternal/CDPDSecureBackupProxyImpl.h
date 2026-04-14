@class NSString, CDPContext;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (BOOL)removeRecoveryKeyFromSOS:(id *)a0;
- (id)accountInfoWithInfo:(id)a0 error:(id *)a1;
- (id)secureBackupContextWithInfo:(id)a0;
- (BOOL)isRecoveryKeySet:(id *)a0;
- (void)accountInfoWithInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableWithInfo:(id)a0 error:(id *)a1;
- (BOOL)setRecoveryKeyInSOS:(id)a0 error:(id *)a1;
- (id)activityTypeString;
- (BOOL)verifyRecoveryKey:(id)a0 error:(id *)a1;
- (void)_cleanUpPostEscrowCreationStates;
- (id)recoverWithInfo:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)uncacheAllSecrets;
- (BOOL)disableWithInfo:(id)a0 error:(id *)a1;
- (void)cacheRecoveryKey:(id)a0 completionBlock:(id /* block */)a1;
- (id)secureBackupContext;
- (BOOL)_createAndRegisterBackupPublicKeyInSOS:(id)a0 error:(id *)a1;

@end
