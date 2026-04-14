@class NSUUID, NSDate;

@interface RTTripClusterMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *clusterID;
@property (readonly, nonatomic) double originLatitude;
@property (readonly, nonatomic) double originLongitude;
@property (readonly, nonatomic) double destinationLatitude;
@property (readonly, nonatomic) double destinationLongitude;
@property (readonly, nonatomic) int countOfTraversal;
@property (readonly, copy, nonatomic) NSDate *dateOfMostRecentTrip;
@property (readonly, nonatomic) long long modeOfTransport;
@property (readonly, nonatomic) double averageTripTime;
@property (readonly, nonatomic) double averageTripDistance;
@property (readonly, nonatomic) double minimumTripTime;
@property (readonly, nonatomic) double maximumTripTime;
@property (readonly, nonatomic) double minimumTripDistance;
@property (readonly, nonatomic) double maximumTripDistance;
@property (readonly, copy, nonatomic) NSUUID *commuteID;
@property (readonly, nonatomic) BOOL isLocked;
@property (nonatomic) double avgBikeDistance;
@property (nonatomic) double avgBikeTime;
@property (nonatomic) double avgWalkDistance;
@property (nonatomic) double avgWalkTime;
@property (nonatomic) int bikeTraversalCount;
@property (nonatomic) int walkTraversalCount;
@property (nonatomic) short clusterOrder;

+ (BOOL)_isValidClusterOrder:(short)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTripClusterId:(id)a0 dateOfMostRecentTrip:(id)a1 modeOfTransport:(long long)a2 countOfTraversal:(int)a3 originLatitude:(double)a4 originLongitude:(double)a5 destinationLatitude:(double)a6 destinationLongitude:(double)a7 averageTripTime:(double)a8 averageTripDistance:(double)a9 minimumTripTime:(double)a10 maximumTripTime:(double)a11 minimumTripDistance:(double)a12 maximumTripDistance:(double)a13 commuteID:(id)a14 isLocked:(BOOL)a15 avgBikeDistance:(double)a16 avgBikeTime:(double)a17 avgWalkDistance:(double)a18 avgWalkTime:(double)a19 bikeTraversalCount:(int)a20 walkTraversalCount:(int)a21 clusterOrder:(short)a22;

@end
