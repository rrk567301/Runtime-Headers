@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger

@property (readonly) double timeInterval;

+ (char)supportsSecureCoding;
+ (id)triggerWithTimeInterval:(double)a0 repeats:(char)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nextTriggerDate;
- (id)_initWithTimeInterval:(double)a0 repeats:(char)a1;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
