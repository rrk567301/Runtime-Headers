@class NSString, EKTravelEngineHypothesis, NSDate;

@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData <NSCopying>

@property (copy, nonatomic) NSString *alarmID;
@property (nonatomic) char isOffsetFromTravelTimeStart;
@property (copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic) char hasDisplayedLeaveByMessage;
@property (nonatomic) char hasDisplayedLeaveNowMessage;
@property (nonatomic) char hasDisplayedRunningLateMessage;
@property (copy, nonatomic) NSDate *lastTimeNotificationAdded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlarmID:(id)a0;
- (void)setHasDisplayedLeaveNowMessage:(char)a0;
- (void)setIsOffsetFromTravelTimeStart:(char)a0;
- (void)setHasDisplayedLeaveByMessage:(char)a0;
- (void)setHasDisplayedRunningLateMessage:(char)a0;
- (void)setHypothesis:(id)a0;
- (void)setLastFireTimeOfAlertOffsetFromTravelTime:(id)a0;
- (void)setLastTimeNotificationAdded:(id)a0;

@end
