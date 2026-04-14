@class NSNumber, MTRZoneManagementClusterTwoDCartesianZoneStruct;

@interface MTRZoneManagementClusterZoneInformationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zoneID;
@property (copy, nonatomic) NSNumber *zoneType;
@property (copy, nonatomic) NSNumber *zoneSource;
@property (copy, nonatomic) MTRZoneManagementClusterTwoDCartesianZoneStruct *twoDCartesianZone;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
