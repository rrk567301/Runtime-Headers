@class NSUUID, NSDate;

@interface RTTripClusterMO : RTCloudManagedObject

@property (nonatomic) double startLatitude;
@property (nonatomic) double startLongitude;
@property (nonatomic) double endLatitude;
@property (nonatomic) double endLongitude;
@property (copy, nonatomic) NSUUID *clusterID;
@property (nonatomic) unsigned short countOfTraversal;
@property (nonatomic) unsigned short modeOfTransport;
@property (copy, nonatomic) NSDate *lastTimeTaken;
@property (nonatomic) double avgTripTime;
@property (nonatomic) double minTripTime;
@property (nonatomic) double maxTripTime;
@property (nonatomic) double avgTripDistance;
@property (nonatomic) double minTripDistance;
@property (nonatomic) double maxTripDistance;
@property (copy, nonatomic) NSUUID *commuteID;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) double avgBikeDistance;
@property (nonatomic) double avgBikeTime;
@property (nonatomic) double avgWalkDistance;
@property (nonatomic) double avgWalkTime;
@property (nonatomic) short countOfWalkTraversal;
@property (nonatomic) short countOfBikeTraversal;
@property (nonatomic) short clusterOrder;

+ (id)fetchRequest;
+ (id)managedObjectWithTripCluster:(id)a0 inManagedObjectContext:(id)a1;

@end
