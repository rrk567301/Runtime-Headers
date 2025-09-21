@interface LNConfirmationSystemStyle : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) char supportsSecureCoding;

+ (id)montaraEnablementWithBundleIdentifier:(id)a0 source:(long long)a1 isExplicitRequest:(char)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
