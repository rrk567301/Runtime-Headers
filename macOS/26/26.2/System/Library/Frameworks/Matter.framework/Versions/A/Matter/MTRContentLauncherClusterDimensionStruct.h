@class NSNumber;

@interface MTRContentLauncherClusterDimensionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSNumber *metric;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
