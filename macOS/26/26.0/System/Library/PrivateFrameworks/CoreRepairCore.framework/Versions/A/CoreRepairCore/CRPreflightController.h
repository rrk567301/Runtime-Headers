@class NSString, NSNumber, NSXPCConnection;

@interface CRPreflightController : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSXPCConnection *connectionToService;
@property (retain, nonatomic) NSString *preflightServiceName;
@property (nonatomic) BOOL miniPreflight;
@property (retain, nonatomic) NSString *socksHost;
@property (retain, nonatomic) NSNumber *socksPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_diskImageSupportPreflight;
- (BOOL)challengeStrongComponents:(id)a0 responses:(id *)a1 error:(id *)a2;
- (id)components:(id)a0 withState:(long long)a1;
- (id)createPEMFromCerts:(id)a0;
- (BOOL)deltaComponents:(id *)a0 strongComponents:(id *)a1 error:(id *)a2;
- (id)filteredPhase2Components:(id)a0 response:(id)a1;
- (id)getPreflightEndpoint;
- (id)getSupportedStrongComponents;
- (BOOL)isErrorResponse:(id)a0;
- (BOOL)issueRepairCert:(id *)a0 keyBlob:(id *)a1 error:(id *)a2;
- (void)preflight:(id)a0 withReply:(id /* block */)a1;
- (void)preflightPhase1:(id)a0 withReply:(id /* block */)a1;
- (void)preflightPhase2:(id)a0 withReply:(id /* block */)a1;
- (BOOL)queryRepairDelta:(id *)a0 error:(id *)a1;
- (id)sendRequest:(id)a0 keyBlob:(id)a1 error:(id *)a2;
- (BOOL)setComponentsState:(id)a0 withResponseDetails:(id)a1;
- (id)sign:(id)a0 keyBlob:(id)a1;
- (BOOL)verify:(id)a0 signature:(id)a1 keyBlob:(id)a2;

@end
