@class NSString;

@interface WFAppProtectionDialogRequest : WFDialogRequest

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0;

@end
