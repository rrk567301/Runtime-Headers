@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger

@property (readonly, copy) NSDateComponents *dateComponents;

+ (char)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)a0 repeats:(char)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nextTriggerDate;
- (id)_initWithDateComponents:(id)a0 repeats:(char)a1;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
