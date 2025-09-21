@class NSUUID, NSDate;

@interface RTTripClusterRecencyMO : RTCloudManagedObject

@property (copy, nonatomic) NSUUID *clusterID;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSDate *endTime;

+ (id)fetchRequest;
+ (id)managedObjectWithTripClusterRecency:(id)a0 inManagedObjectContext:(id)a1;

@end
