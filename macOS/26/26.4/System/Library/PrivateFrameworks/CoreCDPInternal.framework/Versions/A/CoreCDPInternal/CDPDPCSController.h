@class CDPContext;
@protocol CDPProtectedCloudStorageProxy;

@interface CDPDPCSController : NSObject

@property (retain, nonatomic) id<CDPProtectedCloudStorageProxy> pcsProxy;
@property (retain, nonatomic) CDPContext *context;

- (void)repairPDPStateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)generatePDPBlobWithCompletion:(id /* block */)a0;
- (void)_checkiCDPStatusNetwork:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)_contextSetupDictionary;
- (void)_enableCDPWithCompletion:(id /* block */)a0;
- (id)_fetchKeyForPCSIdentityRef:(struct _PCSIdentityData { } *)a0;
- (struct _PCSIdentitySetData { } *)_getOrSetupIdentitySetRef:(id *)a0;
- (id)_pdpContextSetupDictionary;
- (void)_reauthenticateAndCheckiCDPStatusWithNetwork:(BOOL)a0 completion:(id /* block */)a1;
- (void)_renewCredentialsWithError:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shoudAllowKeyFetchForService:(id)a0;
- (void)changePasswordWithCompletion:(id /* block */)a0;
- (void)checkiCDPStatusNetwork:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)enableCDPWithCompletion:(id /* block */)a0;
- (void)healBrokenADPEnablementWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 pcsProxy:(id)a1;
- (BOOL)isCloudProtectionEnabledLocally:(id *)a0;
- (BOOL)isCompanionInKeychainCircle:(id *)a0;
- (id)pcsKeysForService:(id)a0 error:(id *)a1;
- (void)recoverAndSynchronizeKeysWithCompletion:(id /* block */)a0;
- (void)recoverKeysWithCompletion:(id /* block */)a0;
- (void)setupPDPIdentitiesWithCompletion:(id /* block */)a0;
- (void)setupPDPKeysAfterIntermissionWithCompletion:(id /* block */)a0;
- (void)validatePDPIdentitiesWithCompletion:(id /* block */)a0;

@end
