@class NSString, WFAppDisplayRepresentation;

@interface WFApp : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) WFAppDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allApps;
+ (id)findAppWithBundleIdentifier:(id)a0 name:(id)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isHidden;
- (id)bundleURL;
- (id)processIdentifier;
- (char)isRunning;
- (id)icon;
- (id)launchDate;
- (id)initWithRecord:(id)a0;
- (char)isFrontmost;
- (id)initWithBundleIdentifier:(id)a0 displayRepresentation:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1;
- (char)isAvailableInUserFacingContext;

@end
