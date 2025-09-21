@class NSString, FUAirport, NSDate, NSNumber;

@interface FUBaseStopInfo : NSObject <FUStopInfo> {
    NSDate *_displayTime;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) FUAirport *airport;
@property (readonly) NSString *gate;
@property (readonly) NSString *terminal;
@property (readonly) NSDate *displayTime;
@property (readonly) NSDate *scheduledGateTime;
@property (readonly) NSDate *currentGateTime;
@property (readonly) NSDate *scheduledRunwayTime;
@property (readonly) NSDate *currentRunwayTime;
@property (readonly) NSNumber *gateBufferMinutes;
@property (readonly) NSNumber *runwayBufferMinutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setDisplayTime:(id)a0;
- (id)delayFromSchedule;
- (long long)_deltaGateMinutes;
- (unsigned long long)flightTimeStatus;
- (id)initWithAirport:(id)a0 gate:(id)a1 terminal:(id)a2 displayTime:(id)a3 scheduledGateTime:(id)a4 currentGateTime:(id)a5 scheduledRunwayTime:(id)a6 currentRunwayTime:(id)a7 gateBufferMinutes:(id)a8 runwayBufferMinutes:(id)a9;

@end
