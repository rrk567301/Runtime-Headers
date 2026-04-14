@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedExtensionBundleDisplayName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedExtensionBundleDisplayName:(id)a0;

@end
