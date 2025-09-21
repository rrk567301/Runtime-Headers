@class NSString, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationTriggerData : NSObject

@property (readonly, nonatomic) unsigned long long trigger;
@property (readonly, copy, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) char isOffsetFromTravelTimeStart;
@property (readonly, nonatomic) EKTravelEngineHypothesis *hypothesis;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTrigger:(unsigned long long)a0 alarmID:(id)a1 isOffsetFromTravelTimeStart:(char)a2 hypothesis:(id)a3;

@end
