@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol _ASWebAuthenticationSessionRequestServerDelegate, OS_dispatch_queue;

@interface _ASWebAuthenticationSessionRequestServer : NSObject {
    NSMutableArray *_requestQueue;
    NSMutableSet *_requestsInProgress;
    NSMutableDictionary *_requestsToCompletionHandlers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_browserApplicationIdentifierToConnection;
}

@property (weak, nonatomic) id<_ASWebAuthenticationSessionRequestServerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestWithUUID:(id)a0;
- (void)_dispatchRequest:(id)a0;
- (void)_dispatchNextRequest;
- (void)_finishEstablishingConnection:(id)a0;
- (void)_immediatelyCancelRequest:(id)a0;
- (id)_inProgressRequestWithUUID:(id)a0;
- (void)_invalidateClientConnectionIfNeeded:(id)a0 forApplicationIdentifier:(id)a1;
- (id)_queuedRequestWithUUID:(id)a0;
- (id)_requestHandlerProxyForApplicationIdentifier:(id)a0;
- (void)connectToClientWithEndpoint:(id)a0;
- (void)didFulfillRequest:(id)a0 withCallbackURL:(id)a1 error:(id)a2;
- (void)enqueueRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
