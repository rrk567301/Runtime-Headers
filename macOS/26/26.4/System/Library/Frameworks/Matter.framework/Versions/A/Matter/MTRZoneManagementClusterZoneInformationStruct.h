@class NSNumber, MTRZoneManagementClusterTwoDCartesianZoneStruct;

@interface MTRZoneManagementClusterZoneInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zoneID;
@property (copy, nonatomic) NSNumber *zoneType;
@property (copy, nonatomic) NSNumber *zoneSource;
@property (copy, nonatomic) MTRZoneManagementClusterTwoDCartesianZoneStruct *twoDCartesianZone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
