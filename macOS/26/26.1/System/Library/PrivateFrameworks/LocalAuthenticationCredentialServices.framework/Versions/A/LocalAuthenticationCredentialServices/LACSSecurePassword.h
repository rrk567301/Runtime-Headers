@class LACSPassword;

@interface LACSSecurePassword : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LACSPassword *password;

- (id)initWithPassword:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)contextRef;

@end
