@class NSString, CKDXPCConnection, CKEntitlements;
@protocol CKXPCProcessScopedClient;

@interface CKDProcessScopedClientProxy : NSObject

@property (retain) id<CKXPCProcessScopedClient> processScopedClientProxyCreator;
@property (readonly, getter=isPlatformBinary) BOOL platformBinary;
@property (nonatomic) long long hasValidatedEntitlementsTernary;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processBinaryName;
@property (readonly, nonatomic) NSString *procName;
@property (readonly, getter=isSandboxed) BOOL sandboxed;
@property (readonly, weak, nonatomic) CKDXPCConnection *clientConnection;
@property (nonatomic) unsigned int clientSDKVersion;
@property (readonly, nonatomic) CKEntitlements *clientEntitlements;
@property (retain, nonatomic) id cloudCoreClientEntitlements;
@property (readonly, nonatomic) BOOL isClientMainBundleAppleExecutable;

+ (BOOL)isPlatformBinary:(struct { unsigned int x0[8]; })a0;

- (BOOL)hasValidatedEntitlements;
- (id)getFileMetadataWithFileHandle:(id)a0 openInfo:(id)a1 error:(id *)a2;
- (BOOL)canOpenFileAtURL:(id)a0;
- (void)handleSignificantIssue:(id)a0 actions:(unsigned long long)a1;
- (void)calculateCloudCoreClientEntitlements;
- (void)_getProcessScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)processIsAttached;
- (void)getProcessScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (id)initWithClientConnection:(id)a0;
- (void)noteSystemIsAvailable;
- (void).cxx_destruct;
- (void)invalidate;
- (id)CKPropertiesDescription;
- (id)clientEntitlementsWithContainerOptions:(id)a0;
- (id)description;
- (id)issueSandboxExtensionForItem:(id)a0 error:(id *)a1;

@end
