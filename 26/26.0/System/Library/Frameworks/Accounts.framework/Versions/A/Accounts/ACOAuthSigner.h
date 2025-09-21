@class ACAccount, NSXPCConnection;
@protocol ACDOAuthSignerProtocol;

@interface ACOAuthSigner : NSObject {
    NSXPCConnection *_connection;
    ACAccount *_account;
    id<ACDOAuthSignerProtocol> _proxyShim;
}

@property BOOL shouldIncludeAppIdInRequest;

- (void)dealloc;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)signedURLRequestWithURLRequest:(id)a0 callingPID:(id)a1 timestamp:(id)a2;
- (void)disconnectFromRemoteOAuthSigner;
- (id)initWithAccount:(id)a0 remoteEndpoint:(id)a1;
- (id)signedURLRequestWithURLRequest:(id)a0;
- (void)_connectToRemoteOAuthSignerUsingEndpoint:(id)a0;
- (id)signedURLRequestWithURLRequest:(id)a0 applicationID:(id)a1 timestamp:(id)a2;

@end
