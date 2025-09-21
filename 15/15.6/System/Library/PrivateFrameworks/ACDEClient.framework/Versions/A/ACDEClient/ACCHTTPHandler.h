@class NSDictionary, NSString, NSArray;
@protocol ACFHTTPTransportProtocol, ACCAuthContextProtocol;

@interface ACCHTTPHandler : NSObject

@property char shouldIgnoreInvalidDSPublicKey;
@property char shouldIgnoreInvalidToken;
@property (retain, nonatomic) id<ACCAuthContextProtocol> context;
@property (retain, nonatomic) id<ACFHTTPTransportProtocol> transport;
@property (readonly, nonatomic) char isCanceled;
@property (copy, nonatomic) id /* block */ finalizeBlock;
@property (readonly, nonatomic) NSDictionary *httpRequestDictionary;
@property (readonly, nonatomic) NSDictionary *requestHeader;
@property (readonly, nonatomic) NSDictionary *requestBody;
@property (readonly, nonatomic) NSString *iForgotURL;
@property (readonly, nonatomic) NSArray *serverHosts;
@property (readonly, nonatomic) NSArray *serverAttemptsDelays;

+ (id)handlerWithContext:(id)a0;

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)cancelRequest;
- (id)realm;
- (void)updateTransport;
- (id)convertErrorToACMError:(id)a0;
- (id)iForgotString;
- (char)installCertificateWithString:(id)a0 version:(id)a1 forRealm:(id)a2;
- (id)invalidPublicKeyErrorForReponse:(id)a0 error:(id)a1;
- (char)isConnectionError:(id)a0;
- (char)isUknownServerError:(id)a0;
- (void)performRequestWithCompletionBlock:(id /* block */)a0;
- (id)responseWithData:(id)a0 error:(id *)a1;
- (char)shouldReturnResponse:(id)a0 orReportError:(id *)a1;
- (char)shouldTryOtherServers:(id)a0 error:(id)a1;
- (void)uninstallPublicKeyForRealm:(id)a0;
- (char)updatePublicKeyWithResponse:(id)a0;

@end
