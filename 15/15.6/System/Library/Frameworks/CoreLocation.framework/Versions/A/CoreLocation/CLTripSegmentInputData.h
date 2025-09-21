@class NSUUID, NSArray, CLTripSegmentLocation;

@interface CLTripSegmentInputData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSUUID *tripSegmentID;
@property (readonly, nonatomic) char isFinalPart;
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
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(char)a1 modeOfTransport:(long long)a2 tripLocations:(id)a3;
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(char)a1 modeOfTransport:(long long)a2 tripLocations:(id)a3 startTripLocation:(id)a4 stopTripLocation:(id)a5 inertialData:(id)a6;
- (id)initWithTripSegmentID:(id)a0 isFinalPart:(char)a1 modeOfTransport:(long long)a2 tripLocations:(id)a3 startTripLocation:(id)a4 stopTripLocation:(id)a5 inertialOdometryData:(id)a6;
- (BOOL)isAutomotiveModeOfTransport;
- (BOOL)isCyclingModeOfTransport;
- (BOOL)isPedestrianModeOfTransport;

@end
