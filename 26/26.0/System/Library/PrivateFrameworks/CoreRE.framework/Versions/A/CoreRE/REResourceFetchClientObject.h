@class REResourceClientPorts, NSString, NSObject;
@protocol OS_voucher;

@interface REResourceFetchClientObject : NSObject <REResourceFetchService>

@property (readonly, nonatomic) void *resourceFetchManager;
@property (readonly, nonatomic) unsigned long long peerID;
@property (readonly, nonatomic) REResourceClientPorts *clientPorts;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (readonly, copy, nonatomic) NSString *redactedDescription;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) void *pendingShaderGraphs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)associateConnectionWithPeerID:(unsigned long long)a0 clientPorts:(id)a1;
- (void)decodeShaderGraph:(id)a0 withFnConsts:(id)a1 withReply:(id /* block */)a2;
- (id)initWithResourceFetchManager:(void *)a0 connection:(const struct Connection { id x0; } *)a1 voucher:(id)a2;
- (void)pushLoadedResourceWithPayloadAndAssetId:(unsigned long long)a0 assetType:(id)a1 payload:(id)a2 isPriorityAsset:(BOOL)a3;
- (void)receiveDirectResourceCommit:(id)a0;
- (void)receiveTrackableResource:(id)a0 withType:(int)a1;
- (void)releaseResourcesWithAssetIds:(id)a0;
- (void)resourceAtAssetPath:(id)a0 payloadDidUpdate:(id)a1 error:(id)a2;

@end
