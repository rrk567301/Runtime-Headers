@class ICStoreRequestContext;

@interface ICUserAuthenticationValidationRequest : NSObject {
    ICStoreRequestContext *_requestContext;
}

- (id)initWithUserIdentity:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (void)performWithCompletion:(id /* block */)a0;

@end
