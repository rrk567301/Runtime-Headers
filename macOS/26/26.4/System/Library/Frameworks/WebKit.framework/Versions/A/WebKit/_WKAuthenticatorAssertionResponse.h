@class NSData;

@interface _WKAuthenticatorAssertionResponse : _WKAuthenticatorResponse {
    struct RetainPtr<NSData> { NSData *m_ptr; } m_authenticatorData;
    struct RetainPtr<NSData> { NSData *m_ptr; } m_signature;
    struct RetainPtr<NSData> { NSData *m_ptr; } m_userHandle;
}

@property (readonly, nonatomic) NSData *authenticatorData;
@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSData *userHandle;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithClientDataJSON:(id)a0 rawId:(id)a1 extensionOutputsCBOR:(id)a2 authenticatorData:(id)a3 signature:(id)a4 userHandle:(id)a5 attachment:(long long)a6;
- (id)initWithClientDataJSON:(id)a0 rawId:(id)a1 extensions:(void *)a2 authenticatorData:(id)a3 signature:(id)a4 userHandle:(id)a5 attachment:(long long)a6;

@end
