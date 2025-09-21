@class NSString, FUAirport;

@interface FUArrivalInfo : FUBaseStopInfo <FUStopInfo>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) FUAirport *divertedAirport;
@property (copy) NSString *baggageClaim;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAirport:(id)a0 gate:(id)a1 terminal:(id)a2 baggageClaim:(id)a3 divertedAirport:(id)a4 displayTime:(id)a5 scheduledGateTime:(id)a6 currentGateTime:(id)a7 scheduledRunwayTime:(id)a8 currentRunwayTime:(id)a9 gateBufferMinutes:(id)a10 runwayBufferMinutes:(id)a11;

@end
