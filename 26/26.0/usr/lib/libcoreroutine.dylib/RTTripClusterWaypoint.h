@class NSUUID;

@interface RTTripClusterWaypoint : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *clusterID;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) unsigned long long clRoadID;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) unsigned short sequence;
@property (readonly, nonatomic) BOOL followedByUTurn;

+ (id)getWaypointDataFromWaypoints:(id)a0;
+ (id)getWaypointsFromWaypointData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0 clRoadID:(unsigned long long)a1 latitude:(double)a2 longitude:(double)a3 course:(double)a4 sequence:(unsigned short)a5 followedByUTurn:(BOOL)a6;
- (BOOL)isEqualToWaypoint:(id)a0;

@end
