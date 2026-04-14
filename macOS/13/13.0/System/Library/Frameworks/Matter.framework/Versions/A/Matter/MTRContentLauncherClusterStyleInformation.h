@class NSString, MTRContentLauncherClusterDimension;

@interface MTRContentLauncherClusterStyleInformation : NSObject <NSCopying>

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) MTRContentLauncherClusterDimension *size;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
