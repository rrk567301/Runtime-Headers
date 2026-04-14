@class NSString;

@interface ISS_DAVAuthentication : NSObject {
    struct _CFHTTPAuthentication { } *_auth;
    NSString *_user;
    NSString *_pass;
    NSString *_domain;
}

+ (id)findProxyAuthenticationForRequest:(struct __CFHTTPMessage { } *)a0;

- (void)dealloc;
- (void)finalize;
- (id)password;
- (void)setPassword:(id)a0;
- (void)setDomain:(id)a0;
- (id)realm;
- (id)username;
- (void)setUsername:(id)a0;
- (BOOL)applyCredentialsToRequest:(struct __CFHTTPMessage { } *)a0;
- (BOOL)changeAuthForResponse:(struct __CFHTTPMessage { } *)a0;
- (id)initWithHTTPResponse:(struct __CFHTTPMessage { } *)a0;
- (BOOL)requiresDomain;
- (BOOL)requiresProxyAuthCredentials;
- (BOOL)setProxyAuthFromKeychainForRequest:(struct __CFHTTPMessage { } *)a0 proxyConfig:(id)a1;

@end
