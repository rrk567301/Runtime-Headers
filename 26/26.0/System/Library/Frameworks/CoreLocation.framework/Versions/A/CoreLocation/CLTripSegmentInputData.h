@class NSUUID, NSArray, CLTripSegmentLocation;

@interface CLTripSegmentInputData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *commuteID;
@property (readonly) NSUUID *tripSegmentID;
@property (readonly, nonatomic) BOOL isFinalPart;
@property (readonly, nonatomic) long long modeOfTransport;
@property (readonly) NSArray *inertialData;
@property (readonly) NSArray *inertialOdometryData;
@property (readonly) NSArray *tripLocations;
@property (readonly) CLTripSegmentLocation *startTripLocation;
@property (readonly) CLTripSegmentLocation *stopTripLocation;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommuteID:(id)a0 tripSegmentID:(id)a1 isFinalPart:(BOOL)a2 modeOfTransport:(long long)a3 tripLocations:(id)a4 startTripLocation:(id)a5 stopTripLocation:(id)a6 inertialOdometryData:(id)a7;
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(BOOL)a1 modeOfTransport:(long long)a2 tripLocations:(id)a3 startTripLocation:(id)a4 stopTripLocation:(id)a5 inertialData:(id)a6;
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(BOOL)a1 modeOfTransport:(long long)a2 tripLocations:(id)a3 startTripLocation:(id)a4 stopTripLocation:(id)a5 inertialOdometryData:(id)a6;
- (BOOL)isAutomotiveModeOfTransport;
- (BOOL)isCyclingModeOfTransport;
- (BOOL)isPedestrianModeOfTransport;

@end
