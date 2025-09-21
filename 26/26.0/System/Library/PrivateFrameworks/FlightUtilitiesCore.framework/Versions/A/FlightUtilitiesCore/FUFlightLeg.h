@class FUFlightStep, NSDate, FUDepartureInfo, FUArrivalInfo;

@interface FUFlightLeg : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long status;
@property double duration;
@property (retain) FUFlightStep *departure;
@property (retain) FUFlightStep *arrival;
@property long long flightState;
@property (retain) FUDepartureInfo *departureInfo;
@property (retain) FUArrivalInfo *arrivalInfo;
@property (retain) NSDate *dateLastUpdated;
@property BOOL legacy;
@property (readonly) long long computedFlightState;
@property (readonly) NSDate *dateOfNextExpectedUpdate;

- (void)encodeWithCoder:(id)a0;
- (double)currentProgress;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)baggageClaim;
- (long long)_computedFlightStateWithBuffer:(BOOL)a0;
- (double)_calculateCurrentProgress;
- (double)_currentProgress;
- (id)_nowDate;
- (id)initWithStatus:(long long)a0 duration:(double)a1 departure:(id)a2 arrival:(id)a3 flightState:(long long)a4 departureInfo:(id)a5 arrivalInfo:(id)a6 dateLastUpdated:(id)a7;

@end
