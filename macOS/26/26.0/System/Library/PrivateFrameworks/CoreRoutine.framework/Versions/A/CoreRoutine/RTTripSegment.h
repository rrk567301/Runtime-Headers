@class NSUUID, NSDateInterval;

@interface RTTripSegment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double tripDistance;
@property (readonly, nonatomic) double tripDistanceUncertainty;
@property (readonly, nonatomic) long long modeOfTransportation;
@property (nonatomic) BOOL isConsumedByClustering;
@property (nonatomic) int tripSegmentSequence;
@property (nonatomic) int tripSegmentSequenceMax;
@property (readonly, nonatomic) double originLatitude;
@property (readonly, nonatomic) double originLongitude;
@property (readonly, nonatomic) double destinationLatitude;
@property (readonly, nonatomic) double destinationLongitude;
@property (copy, nonatomic) NSUUID *tripCommuteID;

+ (id)mergeTripSegment:(id)a0 other:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTripSegmentIdentifier:(id)a0 dateInterval:(id)a1 tripDistance:(double)a2 tripDistanceUncertainty:(double)a3 modeOfTransportation:(long long)a4 isConsumedByClustering:(BOOL)a5 tripSegmentSequence:(int)a6 tripSegmentSequenceMax:(int)a7 originLatitude:(double)a8 originLongitude:(double)a9 destinationLatitude:(double)a10 destinationLongitude:(double)a11 tripCommuteID:(id)a12;

@end
