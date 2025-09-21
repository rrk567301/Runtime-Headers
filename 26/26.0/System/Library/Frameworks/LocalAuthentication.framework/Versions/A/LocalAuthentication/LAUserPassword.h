@class LACSSecurePassword;

@interface LAUserPassword : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) LACSSecurePassword *password;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithPassword:(id)a0;
- (void).cxx_destruct;

@end
