@class NSString;

@interface WFSiriAppProtectionRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithBundleIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
