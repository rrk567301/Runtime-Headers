@class NSString;
@protocol BCOAuth2RequestProtocol;

@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) id<BCOAuth2RequestProtocol> authenticationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)accessTokenForData:(id)a0 completion:(id /* block */)a1;
- (void)exchangeCode:(id)a0 completion:(id /* block */)a1;
- (void)fetchTokenWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithAuthenticationRequest:(id)a0;
- (BOOL)processFragments:(id)a0 completion:(id /* block */)a1;
- (BOOL)processQueryItems:(id)a0 completion:(id /* block */)a1;

@end
