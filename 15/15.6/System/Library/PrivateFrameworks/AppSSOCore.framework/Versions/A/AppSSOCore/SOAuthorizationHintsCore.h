@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedExtensionBundleDisplayName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalizedExtensionBundleDisplayName:(id)a0;

@end
