@class NSString, NSURL;

@interface OSSystemExtensionProperties : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *bundleIdentifier;
@property char isEnabled;
@property (retain) NSString *displayName;
@property (retain) NSString *usageDescription;
@property (retain) NSURL *URL;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *bundleShortVersion;
@property char isAwaitingUserApproval;
@property char isUninstalling;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 version:(id)a2 shortVersion:(id)a3 isEnabled:(char)a4 isAwaitingUserApproval:(char)a5 isUninstalling:(char)a6 displayName:(id)a7 usageDescription:(id)a8;

@end
