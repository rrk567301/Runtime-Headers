@class NSString, NSNumber, NSArray;

@interface MTRZoneManagementClusterTwoDCartesianZoneStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *use;
@property (copy, nonatomic) NSArray *vertices;
@property (copy, nonatomic) NSString *color;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
