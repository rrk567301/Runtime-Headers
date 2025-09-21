@class NSArray, NSXPCConnection, NSURL, NSXPCInterface;

@interface SPKernelExtensionPolicy : NSObject {
    NSArray *_currentPolicy;
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly, copy, nonatomic) NSArray *currentPolicy;
@property (readonly, copy, nonatomic) NSArray *pendingApprovals;
@property (readonly, nonatomic) char requiresSecurityDowngrade;
@property (readonly, nonatomic) char requiresRebootForInstallation;
@property (readonly, nonatomic) char requiresAuthenticationOnUpdates;
@property (readonly, nonatomic) char requiresAdministratorToApproveUpdates;
@property (readonly, nonatomic) NSURL *currentUAKL;

+ (id)findBundledKernelExtensions:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)clearConnection;
- (id)areKernelExtensionsApproved:(id)a0 withError:(id *)a1;
- (char)canLoadKernelExtension:(id)a0 error:(id *)a1;
- (char)canLoadKernelExtensionInCache:(id)a0 error:(id *)a1;
- (char)enableKernelExtensionManagementForMDM:(id)a0 error:(id *)a1;
- (char)getCurrentUAKLHash:(id /* block */)a0 withError:(id *)a1;
- (char)installMDMPayload:(id)a0 withTeams:(id)a1 withExtensions:(id)a2 withContext:(id)a3 error:(id *)a4;
- (char)isKernelExtensionApprovedByUser:(id)a0 withBundleID:(id)a1 error:(id *)a2;
- (void)notifyLoadedKernelExtension:(id)a0 withPath:(id)a1;
- (char)notifyUnsupportedKernelExtension:(id)a0 error:(id *)a1;
- (char)removeMDMPayload:(id)a0 withContext:(id)a1 error:(id *)a2;
- (char)requestKernelExtensionApprovals:(id)a0 withError:(id *)a1;
- (char)setApprovalRequiresAdministrator:(char)a0 error:(id *)a1;
- (char)setUserApprovalAllowed:(char)a0 error:(id *)a1;
- (char)teamIdentifierIsAllowed:(id)a0 error:(id *)a1;
- (char)triggerKernelCollectionRebuildFlow:(unsigned long long)a0 withKernelExtensions:(id)a1 withError:(id *)a2;
- (char)triggerKernelCollectionRebuildForMDM:(id)a0 withContext:(id)a1 error:(id *)a2;
- (char)triggerPanicMedicWithError:(id *)a0;
- (char)triggerRecoveryJumpToSecurityStartupUtilityWithError:(id *)a0;
- (char)updateLastUsedTimes:(id)a0 withError:(id *)a1;
- (char)updatePolicyItems:(id)a0 error:(id *)a1;
- (char)updatePolicyItems:(id)a0 withExternalContext:(id)a1 error:(id *)a2;

@end
