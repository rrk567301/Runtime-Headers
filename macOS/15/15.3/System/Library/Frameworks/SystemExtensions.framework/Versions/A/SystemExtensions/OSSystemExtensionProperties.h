@class NSURL, NSString;

@interface OSSystemExtensionProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *URL;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *bundleShortVersion;
@property BOOL isEnabled;
@property BOOL isAwaitingUserApproval;
@property BOOL isUninstalling;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 version:(id)a2 shortVersion:(id)a3 isEnabled:(BOOL)a4 isAwaitingUserApproval:(BOOL)a5 isUninstalling:(BOOL)a6;

@end
