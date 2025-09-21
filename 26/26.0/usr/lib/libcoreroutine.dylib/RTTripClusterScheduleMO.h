@class NSUUID;

@interface RTTripClusterScheduleMO : RTCloudManagedObject

@property (copy, nonatomic) NSUUID *clusterID;
@property (nonatomic) unsigned short timeID;
@property (nonatomic) unsigned short count;

+ (id)fetchRequest;
+ (id)managedObjectWithTripClusterSchedule:(id)a0 inManagedObjectContext:(id)a1;

@end
