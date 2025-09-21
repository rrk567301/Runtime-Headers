@class FUFlightStep, NSString;

@interface FUFlightLeg : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long status;
@property double duration;
@property (readonly) double currentProgress;
@property (retain) FUFlightStep *departure;
@property (retain) FUFlightStep *arrival;
@property (retain) NSString *baggageClaim;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
