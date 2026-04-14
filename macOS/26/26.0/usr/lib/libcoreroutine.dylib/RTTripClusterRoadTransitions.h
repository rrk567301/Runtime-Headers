@class NSString, NSUUID, NSDate;

@interface RTTripClusterRoadTransitions : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int count;
@property (readonly, nonatomic) NSUUID *clusterID;
@property (readonly, nonatomic) unsigned long long clRoadIDTo;
@property (readonly, nonatomic) unsigned long long clRoadIDFrom;
@property (readonly, nonatomic) double fromStartLatitude;
@property (readonly, nonatomic) double fromStartLongitude;
@property (readonly, nonatomic) double fromEndLatitude;
@property (readonly, nonatomic) double fromEndLongitude;
@property (readonly, nonatomic) double toStartLatitude;
@property (readonly, nonatomic) double toStartLongitude;
@property (readonly, nonatomic) double toEndLatitude;
@property (readonly, nonatomic) double toEndLongitude;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned int startRoadCount;
@property (nonatomic) unsigned int endRoadCount;
@property (nonatomic) unsigned int roadSequenceNumber;
@property (nonatomic) double familiarityMetric;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithTripClusterRoadTransitionsMO:(id)a0;
+ (id)getRoadTransitionsDataFromRoadTransitions:(id)a0;
+ (id)getRoadTransitionsFromRoadTransitionsData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithclusterID:(id)a0 clRoadIDFrom:(unsigned long long)a1 clRoadIDTo:(unsigned long long)a2 fromStartLatitude:(double)a3 fromStartLongitude:(double)a4 fromEndLatitude:(double)a5 fromEndLongitude:(double)a6 toStartLatitude:(double)a7 toStartLongitude:(double)a8 toEndLatitude:(double)a9 toEndLongitude:(double)a10 count:(unsigned int)a11 startDate:(id)a12 startRoadCount:(unsigned int)a13 endRoadCount:(unsigned int)a14 roadSequenceNumber:(unsigned int)a15 familiarityMetric:(double)a16;
- (void)incrementCountBy:(unsigned int)a0;
- (BOOL)isEqualToRoadTransition:(id)a0;
- (BOOL)isSameFromAndToStartandEndCoordinates:(id)a0;
- (void)updateCLRoadIDFromField:(unsigned long long)a0;
- (void)updateCLRoadIDToField:(unsigned long long)a0;

@end
