@class _TtC37LocalAuthenticationCredentialServices21LACSUnmanagedPassword;

@interface LACSUnmanagedSecurePassword : NSObject

@property (nonatomic, readonly) _TtC37LocalAuthenticationCredentialServices21LACSUnmanagedPassword *password;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPassword:(id)a0;
- (id)unsafeContextRef;
- (id)contextRef;
- (void)withContextRef:(id /* block */)a0;
- (id)initWithData:(id)a0 contextRef:(id)a1 error:(id *)a2;

@end
