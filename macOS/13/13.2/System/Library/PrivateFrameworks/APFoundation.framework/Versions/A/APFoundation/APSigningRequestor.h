@class NSString;

@interface APSigningRequestor : APXPCActionRequester <APSigningXPC>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInterrupted;
- (id)remoteObjectInterface;
- (void)connectionInvalidated;
- (void)rotate;
- (void)requestCertificate:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
