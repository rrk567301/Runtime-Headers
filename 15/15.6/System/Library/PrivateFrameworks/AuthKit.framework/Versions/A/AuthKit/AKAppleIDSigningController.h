@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject, AKAppleIDAuthenticationController;
@protocol OS_dispatch_queue;

@interface AKAppleIDSigningController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _signerLock;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic) char shouldSendAbsintheHeader;
@property (nonatomic) char isProxy;
@property (retain, nonatomic) NSString *initialURLKey;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInvalidated;
- (void)_additionalAbsintheHeadersForRequest:(id)a0 completion:(id /* block */)a1;
- (void)_additionalAttestationHeadersForRequest:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_connectionInterrupted;
- (id)_parseDERCertificatesFromChain:(id)a0 error:(id *)a1;
- (void)absintheSignatureForData:(id)a0 completion:(id /* block */)a1;
- (void)attestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)signWithBAAHeaders:(id)a0 completion:(id /* block */)a1;
- (void)signaturesForData:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)signingHeadersForRequest:(id)a0 completion:(id /* block */)a1;

@end
