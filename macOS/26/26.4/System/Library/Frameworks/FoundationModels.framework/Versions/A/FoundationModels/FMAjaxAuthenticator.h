@class NSString, ACAuthenticationContext, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface FMAjaxAuthenticator : NSObject

@property (retain, nonatomic) ACAuthenticationContext *context;
@property (copy, nonatomic) NSString *tokenCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic) long long tokenType;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *resource;
@property BOOL requiresSilentAuthentication;

- (void).cxx_destruct;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)authenticateIfNeededWithCompletionHandler:(id /* block */)a0;
- (id)base64DataFromURLSafeString:(id)a0;
- (id)initWithTokenType:(long long)a0 clientID:(id)a1 scopes:(id)a2 resource:(id)a3;
- (BOOL)isExpired:(id)a0;

@end
