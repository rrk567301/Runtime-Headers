@class NSString, EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) char isOffsetFromTravelTimeStart;
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (readonly, nonatomic) char hasDisplayedLeaveByMessage;
@property (readonly, nonatomic) char hasDisplayedLeaveNowMessage;
@property (readonly, nonatomic) char hasDisplayedRunningLateMessage;
@property (readonly, copy, nonatomic) NSDate *lastTimeNotificationAdded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAlarmID:(id)a0 isOffsetFromTravelTimeStart:(char)a1 lastFireTimeOfAlertOffsetFromTravelTime:(id)a2 hypothesis:(id)a3 hasDisplayedLeaveByMessage:(char)a4 hasDisplayedLeaveNowMessage:(char)a5 hasDisplayedRunningLateMessage:(char)a6 lastTimeNotificationAdded:(id)a7;
- (char)isEqualToNotificationData:(id)a0;

@end
