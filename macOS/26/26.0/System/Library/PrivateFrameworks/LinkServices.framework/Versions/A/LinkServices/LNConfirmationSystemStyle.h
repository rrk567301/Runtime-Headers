@interface LNConfirmationSystemStyle : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

+ (id)montaraEnablementWithBundleIdentifier:(id)a0 source:(long long)a1 isExplicitRequest:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
