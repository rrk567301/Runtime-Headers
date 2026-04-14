@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger

@property (readonly, copy) CLRegion *region;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithRegion:(id)a0 repeats:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithRegion:(id)a0 repeats:(BOOL)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
