@class NSString;

@interface KTLogNetworkRequest : TransparencyNetworkRequest

@property (retain) NSString *application;

- (void).cxx_destruct;
- (id)createGETRequestForURL:(id)a0 timeout:(double)a1 error:(id *)a2;
- (void)createRequestForAuthentication:(id)a0 fetchAuthNow:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)createRequestForAuthentication:(id)a0 completionHandler:(id /* block */)a1;
- (id)initGETWithURL:(id)a0 application:(id)a1;
- (id)initPOSTWithURL:(id)a0 data:(id)a1 uuid:(id)a2 application:(id)a3;

@end
