@class OACredential;

@interface OAURLRequestSigner : NSObject {
    OACredential *_credential;
}

@property (nonatomic) int signatureMethod;

- (void)dealloc;
- (id)signedURLRequestWithRequest:(id)a0 applicationID:(id)a1 timestamp:(id)a2;
- (id)initWithCredential:(id)a0;
- (id)signatureMethodString;
- (Class)signer;
- (id)oauthNonce;
- (id)timestamp:(id)a0;
- (id)oauthParametersWithNonce:(id)a0 timeStamp:(id)a1;
- (id)oauthAuthorizationHeaderWithSignature:(id)a0 nonce:(id)a1 timestamp:(id)a2;
- (id)applyApplicationID:(id)a0 toRequest:(id)a1 containsMultiPartData:(BOOL)a2;
- (id)signedURLRequestWithRequest:(id)a0;

@end
