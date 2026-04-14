@class NSString;

@interface WFAppProtectionDialogRequest : WFDialogRequest

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppBundleIdentifier:(id)a0;

@end
