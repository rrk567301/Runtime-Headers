@class NSData, NSUUID;

@interface RTTripClusterWaypointDataMO : RTCloudManagedObject

@property (copy, nonatomic) NSData *waypoints;
@property (copy, nonatomic) NSUUID *clusterID;

+ (id)fetchRequest;
+ (id)managedObjectWithTripClusterWaypoints:(id)a0 inManagedObjectContext:(id)a1;

@end
