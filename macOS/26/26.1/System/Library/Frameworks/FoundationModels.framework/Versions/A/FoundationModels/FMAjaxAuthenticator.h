@class ACAuthenticationContext;

@interface FMAjaxAuthenticator : NSObject {
    ACAuthenticationContext *_context;
}

@property BOOL requiresSilentAuthentication;

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (void)authenticate:(long long)a0 clientID:(id)a1 scopes:(id)a2 resource:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)authenticateIfNeeded:(long long)a0 clientID:(id)a1 scopes:(id)a2 resource:(id)a3 withCompletionHandler:(id /* block */)a4;

@end
