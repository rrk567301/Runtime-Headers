@class NSString, NSDate, NSNumber, PKAirport;

@interface PKFlightStep : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKAirport *airport;
@property (retain, nonatomic) NSString *terminal;
@property (retain, nonatomic) NSString *gate;
@property (retain, nonatomic) NSString *baggageClaim;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSDate *originalDate;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDate *scheduledGateTime;
@property (retain, nonatomic) NSDate *currentGateTime;
@property (retain, nonatomic) NSDate *scheduledRunwayTime;
@property (retain, nonatomic) NSDate *currentRunwayTime;
@property (retain, nonatomic) NSNumber *gateBufferMinutes;
@property (retain, nonatomic) NSNumber *runwayBufferMinutes;

- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAirport:(id)a0 terminal:(id)a1 gate:(id)a2 baggageClaim:(id)a3 status:(unsigned long long)a4 scheduledGateTime:(id)a5 currentGateTime:(id)a6 scheduledRunwayTime:(id)a7 currentRunwayTime:(id)a8 gateBufferMinutes:(id)a9 runwayBufferMinutes:(id)a10;
- (id)initWithMockFlightStepDictionary:(id)a0;

@end
