@interface NSWorkspaceAuthorization : NSObject {
    id _private;
}

- (id)data;
- (void)dealloc;
- (id)initWithAuthorizationRef:(struct AuthorizationOpaqueRef { } *)a0 ofType:(long long)a1;

@end
