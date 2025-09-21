@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger

@property (readonly, copy) NSDateComponents *dateComponents;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)a0 repeats:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)nextTriggerDate;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithDateComponents:(id)a0 repeats:(BOOL)a1;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
