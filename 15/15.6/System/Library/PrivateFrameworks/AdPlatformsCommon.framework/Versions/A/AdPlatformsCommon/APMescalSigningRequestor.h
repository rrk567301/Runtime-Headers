@interface APMescalSigningRequestor : APXPCActionRequester

+ (id)machService;
+ (char)canShareConnection;

- (id)init;
- (void)connectionInterrupted;
- (id)remoteObjectInterface;
- (void)connectionInvalidated;
- (id)signatureForData:(id)a0;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (void)signatureForData:(id)a0 waitTime:(double)a1 completion:(id /* block */)a2;

@end
