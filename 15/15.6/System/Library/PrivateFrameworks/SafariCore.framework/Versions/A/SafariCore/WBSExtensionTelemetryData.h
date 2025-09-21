@class NSString;

@interface WBSExtensionTelemetryData : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char enabled;
@property (nonatomic) long long manifestVersion;
@property (nonatomic) char allWebsitesPermissionLevel;
@property (nonatomic) unsigned long long websitesGrantedAccessCount;
@property (nonatomic) unsigned long long websitesDeniedAccessCount;
@property (nonatomic) char canOverrideNewTabPage;

- (void).cxx_destruct;

@end
