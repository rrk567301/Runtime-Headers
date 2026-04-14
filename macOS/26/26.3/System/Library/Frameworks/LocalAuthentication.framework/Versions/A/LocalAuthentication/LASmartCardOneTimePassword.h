@class LACSSecurePassword;

@interface LASmartCardOneTimePassword : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LACSSecurePassword *password;

- (id)init;
- (id)initWithPassword:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
