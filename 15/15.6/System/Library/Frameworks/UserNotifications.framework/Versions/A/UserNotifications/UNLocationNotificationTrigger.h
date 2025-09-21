@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger

@property (readonly, copy) CLRegion *region;

+ (char)supportsSecureCoding;
+ (id)triggerWithRegion:(id)a0 repeats:(char)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRegion:(id)a0 repeats:(char)a1;
- (char)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
