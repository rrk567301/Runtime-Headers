@class NSString, NSDictionary, NSURL, SAUIAddViews, NSArray, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAddViews *alternativePunchOut;
@property (nonatomic) char appAvailableInStorefront;
@property (copy, nonatomic) NSString *appDisplayName;
@property (retain, nonatomic) SAUIImageResource *appIcon;
@property (copy, nonatomic) NSDictionary *appIconMap;
@property (nonatomic) char appInstalled;
@property (copy, nonatomic) NSURL *appStoreUri;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSArray *launchOptions;
@property (nonatomic) char launchOverSiri;
@property (copy, nonatomic) NSString *predefinedButtonType;
@property (copy, nonatomic) NSString *providerId;
@property (copy, nonatomic) NSString *punchOutName;
@property (copy, nonatomic) NSURL *punchOutUri;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *themeIcons;

+ (id)appPunchOut;
+ (id)appPunchOutWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
