@class NSString;

@interface WFAppIcon : WFIcon

@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)associatedLogo;

@end
