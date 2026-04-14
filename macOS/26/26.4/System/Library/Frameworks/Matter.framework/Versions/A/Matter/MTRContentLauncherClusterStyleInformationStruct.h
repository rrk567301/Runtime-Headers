@class NSString, MTRContentLauncherClusterDimensionStruct;

@interface MTRContentLauncherClusterStyleInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) MTRContentLauncherClusterDimensionStruct *size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
