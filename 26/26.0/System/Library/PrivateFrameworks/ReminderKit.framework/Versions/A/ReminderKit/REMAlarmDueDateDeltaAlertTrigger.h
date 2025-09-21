@class NSDate, REMDueDateDeltaInterval;

@interface REMAlarmDueDateDeltaAlertTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMDueDateDeltaInterval *dueDateDelta;
@property (readonly, nonatomic) NSDate *acknowledgedDate;

- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDueDateDelta:(id)a0 acknowledgedDate:(id)a1;
- (id)initWithObjectID:(id)a0 dueDateDelta:(id)a1 acknowledgedDate:(id)a2;
- (BOOL)isTemporal;

@end
