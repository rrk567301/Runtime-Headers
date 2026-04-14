@class NSString, AMSURLSession, AMSMediaRequestEncoder;

@interface SHAMSEndpointRequester : NSObject <SHNetworkRecognitionRequester>

@property (copy) NSString *clientIdentifier;
@property long long clientType;
@property (retain) AMSURLSession *session;
@property (readonly) AMSMediaRequestEncoder *encoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sessionConfiguration;
- (void).cxx_destruct;
- (void)invalidate;
- (id)buildEncoderForSession:(id)a0 clientType:(long long)a1 clientIdentifier:(id)a2;
- (void)handleResultData:(id)a0 forResponse:(id)a1 callback:(id /* block */)a2 error:(id)a3;
- (id)initWithClientIdentifier:(id)a0 clientType:(long long)a1;
- (BOOL)isTokenFailureError:(id)a0;
- (void)performDownloadRequest:(id)a0 filename:(id)a1 fileType:(id)a2 reply:(id /* block */)a3;
- (void)performRequest:(id)a0 withReply:(id /* block */)a1;

@end
