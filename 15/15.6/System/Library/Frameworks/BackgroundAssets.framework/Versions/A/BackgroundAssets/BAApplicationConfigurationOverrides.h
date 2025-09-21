@class NSNumber, NSString, NSArray;

@interface BAApplicationConfigurationOverrides : NSObject

@property (retain, nonatomic) NSNumber *essentialMaxInstallSize;
@property (retain, nonatomic) NSNumber *maxInstallSize;
@property (retain, nonatomic) NSString *manifestURL;
@property (retain, nonatomic) NSNumber *essentialDownloadAllowance;
@property (retain, nonatomic) NSNumber *downloadAllowance;
@property (retain, nonatomic) NSArray *domainAllowlist;
@property (retain, nonatomic) NSNumber *optionalMaxInstallSize;
@property (retain, nonatomic) NSNumber *optionalDownloadAllowance;

+ (char)clearAllOverrides;
+ (char)clearOverridesForAppBundleIdentifier:(id)a0;
+ (id)overridesForAppBundleIdentifier:(id)a0;
+ (char)setOverrides:(id)a0 forAppBundleIdentifier:(id)a1;

- (void).cxx_destruct;

@end
