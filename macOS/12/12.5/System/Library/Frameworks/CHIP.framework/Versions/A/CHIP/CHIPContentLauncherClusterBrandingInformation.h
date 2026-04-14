@class NSString, CHIPContentLauncherClusterStyleInformation;

@interface CHIPContentLauncherClusterBrandingInformation : NSObject

@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *background;
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *logo;
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *progressBar;
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *splash;
@property (retain, nonatomic) CHIPContentLauncherClusterStyleInformation *waterMark;

- (id)init;
- (void).cxx_destruct;

@end
