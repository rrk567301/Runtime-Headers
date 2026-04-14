@class NSString, WFAppDisplayRepresentation;

@interface WFApp : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) WFAppDisplayRepresentation *displayRepresentation;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allApps;
+ (id)findAppWithBundleIdentifier:(id)a0 name:(id)a1;

- (BOOL)isFrontmost;
- (id)initWithRecord:(id)a0;
- (id)bundleURL;
- (void)encodeWithCoder:(id)a0;
- (id)processIdentifier;
- (BOOL)isRunning;
- (id)launchDate;
- (id)initWithCoder:(id)a0;
- (id)icon;
- (BOOL)isHidden;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 displayRepresentation:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1;
- (BOOL)isAvailableInUserFacingContext;

@end
