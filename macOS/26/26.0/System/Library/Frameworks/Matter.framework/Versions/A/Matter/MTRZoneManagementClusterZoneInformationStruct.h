@class NSNumber, MTRZoneManagementClusterTwoDCartesianZoneStruct;

@interface MTRZoneManagementClusterZoneInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zoneID;
@property (copy, nonatomic) NSNumber *zoneType;
@property (copy, nonatomic) NSNumber *zoneSource;
@property (copy, nonatomic) MTRZoneManagementClusterTwoDCartesianZoneStruct *twoDCartesianZone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
