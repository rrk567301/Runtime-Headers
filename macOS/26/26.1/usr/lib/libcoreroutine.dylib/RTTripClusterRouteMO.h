@class NSUUID;

@interface RTTripClusterRouteMO : NSManagedObject

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double course;
@property (nonatomic) unsigned long long clRoadID;
@property (copy, nonatomic) NSUUID *clusterID;
@property (nonatomic) short sequence;
@property (nonatomic) BOOL followedByUTurn;

+ (id)fetchRequest;
+ (id)managedObjectWithTripClusterLocations:(id)a0 inManagedObjectContext:(id)a1;

@end
