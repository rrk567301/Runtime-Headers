@class NSMutableDictionary;

@interface LAACLCoder : NSObject {
    long long _authType;
    long long _fallbackAuthType;
    NSMutableDictionary *_constraints;
    NSMutableDictionary *_credentials;
}

- (void).cxx_destruct;
- (id)init;
- (void)addConstraint:(id)a0;
- (void)setAuthenticationType:(long long)a0;
- (void)addCredential:(id)a0 credentialType:(long long)a1;
- (id)encode;
- (void)setFallbackAuthenticationType:(long long)a0;

@end
