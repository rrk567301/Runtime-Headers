@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedExtensionBundleDisplayName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedExtensionBundleDisplayName:(id)a0;

@end
