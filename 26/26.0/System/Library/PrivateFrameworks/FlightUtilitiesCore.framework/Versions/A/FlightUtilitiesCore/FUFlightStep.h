@class NSString, FUAirport, FUStepTime, NSNumber;

@interface FUFlightStep : NSObject <NSSecureCoding, NSCopying> {
    NSNumber *_delayFromSchedule;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) FUAirport *airport;
@property (retain) NSString *gate;
@property (retain) NSString *terminal;
@property long long legStatus;
@property (retain, nonatomic) NSNumber *delayFromSchedule;
@property (retain) FUStepTime *scheduledTime;
@property (retain) FUStepTime *estimatedTime;
@property (retain) FUStepTime *actualTime;
@property (retain) FUStepTime *runwayTime;
@property BOOL departure;
@property (retain) FUStepTime *plannedTime;
@property (readonly) FUStepTime *time;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly) BOOL taxiing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAirport:(id)a0 gate:(id)a1 terminal:(id)a2 legStatus:(long long)a3 delayFromSchedule:(id)a4 scheduledTime:(id)a5 estimatedTime:(id)a6 actualTime:(id)a7 runwayTime:(id)a8 departure:(BOOL)a9;

@end
