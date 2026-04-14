@class NSString, NSUUID, NSDate;

@interface RTTripCluster : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *clusterID;
@property (readonly, nonatomic) NSUUID *commuteID;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) double startLatitude;
@property (readonly, nonatomic) double startLongitude;
@property (readonly, nonatomic) double endLatitude;
@property (readonly, nonatomic) double endLongitude;
@property (nonatomic) long long modeOfTransport;
@property (copy, nonatomic) NSDate *lastTimeTaken;
@property (nonatomic) int countOfTraversal;
@property (nonatomic) double minTripTime;
@property (nonatomic) double maxTripTime;
@property (nonatomic) double avgTripTime;
@property (nonatomic) double minTripDistance;
@property (nonatomic) double maxTripDistance;
@property (nonatomic) double avgTripDistance;
@property (nonatomic) double avgBikeDistance;
@property (nonatomic) double avgBikeTime;
@property (nonatomic) double avgWalkDistance;
@property (nonatomic) double avgWalkTime;
@property (nonatomic) int countOfBikeTraversal;
@property (nonatomic) int countOfWalkTraversal;
@property (nonatomic) short clusterOrder;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithClusterID:(id)a0 commuteID:(id)a1 startLatitude:(double)a2 startLongitude:(double)a3 endLatitude:(double)a4 endLongitude:(double)a5 modeOfTransport:(long long)a6 lastTimeTaken:(id)a7 avgBikeDistance:(double)a8 avgBikeTime:(double)a9 avgWalkTime:(double)a10 avgWalkDistance:(double)a11 countOfBikeTraversal:(int)a12 countOfWalkTraversal:(int)a13 clusterOrder:(short)a14;
+ (id)createWithTripClusterMO:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0 startLatitude:(double)a1 startLongitude:(double)a2 endLatitude:(double)a3 endLongitude:(double)a4 modeOfTransport:(long long)a5 lastTimeTaken:(id)a6 countOfTraversal:(int)a7 minTripTime:(double)a8 maxTripTime:(double)a9 avgTripTime:(double)a10 minTripDistance:(double)a11 maxTripDistance:(double)a12 avgTripDistance:(double)a13 commuteID:(id)a14 isLocked:(BOOL)a15 avgBikeDistance:(double)a16 avgBikeTime:(double)a17 avgWalkDistance:(double)a18 avgWalkTime:(double)a19 countOfBikeTraversal:(int)a20 countOfWalkTraversal:(int)a21 clusterOrder:(short)a22;
- (BOOL)isEqualToCluster:(id)a0;
- (void)lockCluster;
- (void)unlockCluster;

@end
