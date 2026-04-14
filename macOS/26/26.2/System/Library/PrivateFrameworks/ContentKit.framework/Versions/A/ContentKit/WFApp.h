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
- (id)bundleURL;
- (id)initWithRecord:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)icon;
- (BOOL)isRunning;
- (unsigned long long)hash;
- (id)processIdentifier;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)launchDate;
- (id)initWithBundleIdentifier:(id)a0 displayRepresentation:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1;
- (BOOL)isAvailableInUserFacingContext;

@end
