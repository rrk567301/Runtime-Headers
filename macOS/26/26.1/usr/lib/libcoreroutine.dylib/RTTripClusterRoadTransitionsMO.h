@class NSUUID, NSDate;

@interface RTTripClusterRoadTransitionsMO : NSManagedObject

@property (copy, nonatomic) NSUUID *clusterID;
@property (nonatomic) unsigned long long clRoadIDFrom;
@property (nonatomic) unsigned long long clRoadIDTo;
@property (nonatomic) int count;
@property (nonatomic) double fromStartLatitude;
@property (nonatomic) double fromStartLongitude;
@property (nonatomic) double fromEndLatitude;
@property (nonatomic) double fromEndLongitude;
@property (nonatomic) double toStartLatitude;
@property (nonatomic) double toStartLongitude;
@property (nonatomic) double toEndLatitude;
@property (nonatomic) double toEndLongitude;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned int startRoadCount;
@property (nonatomic) unsigned int endRoadCount;
@property (nonatomic) unsigned int roadSequenceNumber;
@property (nonatomic) double familiarityMetric;

+ (id)fetchRequest;
+ (id)managedObjectWithTripClusterRoadTransitions:(id)a0 inManagedObjectContext:(id)a1;

@end
