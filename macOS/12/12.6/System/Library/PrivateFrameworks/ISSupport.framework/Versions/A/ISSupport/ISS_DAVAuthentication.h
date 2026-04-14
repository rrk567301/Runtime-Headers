@class NSString;

@interface ISS_DAVAuthentication : NSObject {
    struct _CFHTTPAuthentication { } *_auth;
    NSString *_user;
    NSString *_pass;
    NSString *_domain;
}

+ (id)findProxyAuthenticationForRequest:(struct __CFHTTPMessage { } *)a0;

- (void)finalize;
- (void)dealloc;
- (id)password;
- (void)setPassword:(id)a0;
- (void)setDomain:(id)a0;
- (id)username;
- (id)realm;
- (void)setUsername:(id)a0;
- (BOOL)requiresDomain;
- (id)initWithHTTPResponse:(struct __CFHTTPMessage { } *)a0;
- (BOOL)requiresProxyAuthCredentials;
- (BOOL)changeAuthForResponse:(struct __CFHTTPMessage { } *)a0;
- (BOOL)applyCredentialsToRequest:(struct __CFHTTPMessage { } *)a0;
- (BOOL)setProxyAuthFromKeychainForRequest:(struct __CFHTTPMessage { } *)a0 proxyConfig:(id)a1;

@end
