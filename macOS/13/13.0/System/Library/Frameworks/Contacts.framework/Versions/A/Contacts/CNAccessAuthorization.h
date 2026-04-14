@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer;

+ (id)new;
+ (id)allAuthorizationKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (id)authorizedKeysForContactKeys:(id)a0;
- (id)initWithAuthorizer:(id)a0;
- (void)performWork:(id /* block */)a0 authorizingFetchRequest:(id)a1 failureHandler:(id /* block */)a2;
- (BOOL)authorizeFetchRequest:(id)a0 accessError:(id *)a1;
- (void)removeUnauthorizedKeysFromFetchRequest:(id)a0;

@end
