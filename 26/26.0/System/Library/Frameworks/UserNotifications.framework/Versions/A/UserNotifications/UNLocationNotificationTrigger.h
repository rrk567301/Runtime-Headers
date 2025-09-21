@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger

@property (readonly, copy) CLRegion *region;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithRegion:(id)a0 repeats:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithRegion:(id)a0 repeats:(BOOL)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
