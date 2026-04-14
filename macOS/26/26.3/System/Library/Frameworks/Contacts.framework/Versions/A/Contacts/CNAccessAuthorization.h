@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer;

+ (id)new;
+ (BOOL)canSetContactProperty:(id)a0;
+ (id)allAuthorizationKeysVector;
+ (id)unauthorizedKeysVectorWithAuthorizer:(id)a0;
+ (void)removeUnavailableKeysFromContactKeyVector:(id)a0;
+ (id)unauthorizedKeysWithAuthorizer:(id)a0;
+ (id)allAuthorizationKeys;

- (id)initWithAuditToken:(id)a0;
- (id)authorizedKeysForContactKeys:(id)a0;
- (void)performWork:(id /* block */)a0 authorizingFetchRequest:(id)a1 failureHandler:(id /* block */)a2;
- (id)init;
- (id)initWithAuthorizer:(id)a0;
- (id)unauthorizedKeysVector;
- (void)resetUnauthorizedKeysForFetchRequest:(id)a0;
- (BOOL)authorizeFetchRequest:(id)a0 accessError:(id *)a1;
- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;

@end
