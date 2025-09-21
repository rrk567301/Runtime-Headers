@interface STAuthenticationResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char authenticated;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(char)a0;
- (char)isEqualToAuthenticationResult:(id)a0;

@end
