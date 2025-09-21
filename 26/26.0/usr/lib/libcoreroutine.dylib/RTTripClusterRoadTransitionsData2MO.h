@class NSData, NSUUID;

@interface RTTripClusterRoadTransitionsData2MO : NSManagedObject

@property (copy, nonatomic) NSData *roadTransitions;
@property (copy, nonatomic) NSUUID *clusterID;

+ (id)fetchRequest;
+ (id)managedObjectWithTripClusterRoadTransitions:(id)a0 inManagedObjectContext:(id)a1;

@end
