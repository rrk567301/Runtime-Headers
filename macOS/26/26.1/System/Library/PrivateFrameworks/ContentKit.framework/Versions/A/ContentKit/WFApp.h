@class NSString, WFAppDisplayRepresentation;

@interface WFApp : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) WFAppDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allApps;
+ (id)findAppWithBundleIdentifier:(id)a0 name:(id)a1;

- (id)initWithRecord:(id)a0;
- (BOOL)isFrontmost;
- (id)bundleURL;
- (BOOL)isRunning;
- (BOOL)isHidden;
- (unsigned long long)hash;
- (id)icon;
- (void)encodeWithCoder:(id)a0;
- (id)processIdentifier;
- (id)initWithCoder:(id)a0;
- (id)launchDate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 displayRepresentation:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1;
- (BOOL)isAvailableInUserFacingContext;

@end
