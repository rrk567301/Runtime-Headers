@class NSString, FUAirport, FUStepTime, NSNumber;

@interface FUFlightStep : NSObject <NSSecureCoding, NSCopying> {
    NSNumber *_delayFromSchedule;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) FUAirport *airport;
@property (retain) NSString *gate;
@property (retain) NSString *terminal;
@property long long legStatus;
@property (retain, nonatomic) NSNumber *delayFromSchedule;
@property (retain) FUStepTime *scheduledTime;
@property (retain) FUStepTime *estimatedTime;
@property (retain) FUStepTime *actualTime;
@property (retain) FUStepTime *runwayTime;
@property (readonly) char taxiing;
@property char departure;
@property (retain) FUStepTime *plannedTime;
@property (readonly) FUStepTime *time;
@property (readonly, nonatomic) unsigned long long status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
