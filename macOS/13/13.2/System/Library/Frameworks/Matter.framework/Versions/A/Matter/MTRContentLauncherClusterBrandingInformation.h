@class NSString, MTRContentLauncherClusterStyleInformation;

@interface MTRContentLauncherClusterBrandingInformation : NSObject <NSCopying>

@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformation *background;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformation *logo;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformation *progressBar;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformation *splash;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformation *waterMark;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
