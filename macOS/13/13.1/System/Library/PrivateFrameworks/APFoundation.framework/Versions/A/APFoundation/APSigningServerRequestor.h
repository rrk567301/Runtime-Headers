@interface APSigningServerRequestor : NSObject

- (id)init;
- (void)requestCertificate:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)requestSetupForData:(id)a0 completionHandler:(id /* block */)a1;

@end
