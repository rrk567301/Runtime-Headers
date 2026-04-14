@class _TtC37LocalAuthenticationCredentialServices12LACSPassword;

@interface LACSSecurePassword : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _TtC37LocalAuthenticationCredentialServices12LACSPassword *password;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPassword:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)unsafeContextRef;
- (id)contextRef;
- (void)withContextRef:(id /* block */)a0;

@end
