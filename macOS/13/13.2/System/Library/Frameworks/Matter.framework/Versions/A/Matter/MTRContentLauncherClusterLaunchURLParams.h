@class NSString, MTRContentLauncherClusterBrandingInformation, NSNumber;

@interface MTRContentLauncherClusterLaunchURLParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *contentURL;
@property (copy, nonatomic) NSString *displayString;
@property (copy, nonatomic) MTRContentLauncherClusterBrandingInformation *brandingInformation;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
