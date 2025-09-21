@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASWebAuthenticationSessionLaunchAgentProxy : NSObject <ASWebAuthenticationSessionRequestServing> {
    NSXPCConnection *_safariLaunchAgentConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (id)_proxy;
- (void).cxx_destruct;
- (void)_ensureConnectionToLaunchAgentOnInternalQueue;
- (void)connectToAuthenticationSessionRequestClientWithEndpoint:(id)a0;
- (void)didFulfillAuthenticationSessionRequest:(id)a0 withCallbackURL:(id)a1 error:(id)a2;

@end
