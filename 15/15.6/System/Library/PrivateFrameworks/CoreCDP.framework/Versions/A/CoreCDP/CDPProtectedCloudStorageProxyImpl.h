@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _PCSIdentitySetData { } *)pcsIdentitySetupWithInfo:(id)a0 error:(id *)a1;
- (char)_performPCSBlock:(id /* block */)a0 error:(id *)a1;
- (void)edpPCSGuitarfishChangePassword:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishGetRecoveryTokenInfo:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishRepairIdentities:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishSetupIdentities:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSGuitarfishValidateIdentities:(id)a0 completion:(id /* block */)a1;
- (void)edpPCSResetProtectedData:(id)a0 completion:(id /* block */)a1;
- (char)isWalrusEnabledWithOptions:(id)a0 error:(id *)a1;
- (struct _PCSIdentitySetData { } *)pcsIdentityCreateWithInfo:(id)a0 error:(id *)a1;
- (char)pcsIdentityMigrateToiCDPWithInfo:(id)a0 error:(id *)a1;
- (char)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (char)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData { } *)a0 error:(id *)a1;
- (char)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { } *)a0 options:(id)a1 error:(id *)a2;
- (char)pcsRestoreLocalBackup:(id)a0 error:(id *)a1;
- (char)pcsSynchronizeKeysWithInfo:(id)a0 error:(id *)a1;
- (char)repairWalrusWithAccountIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (char)setWalrusEnabled:(char)a0 accountIdentifier:(id)a1 options:(id)a2 error:(id *)a3;

@end
