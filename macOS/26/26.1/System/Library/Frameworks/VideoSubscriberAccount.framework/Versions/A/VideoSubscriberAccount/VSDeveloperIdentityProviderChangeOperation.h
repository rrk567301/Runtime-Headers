@class VSIdentityProvider, VSOptional, NSXPCConnection;

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) long long changeKind;

- (void)executionDidBegin;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_serviceWithErrorHandler:(id /* block */)a0;
- (id)init;

@end
