@interface PKIdentityAuthorizationController : NSObject

- (void)cancelRequest;
- (id)init;
- (void)checkCanRequestDocument:(id)a0 completion:(id /* block */)a1;
- (void)requestDocument:(id)a0 completion:(id /* block */)a1;

@end
