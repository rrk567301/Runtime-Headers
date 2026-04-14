@class NSString, NSNumber, NSArray;

@interface MTRZoneManagementClusterTwoDCartesianZoneStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *use;
@property (copy, nonatomic) NSArray *vertices;
@property (copy, nonatomic) NSString *color;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
