@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL repeats;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)nextTriggerDate;
- (BOOL)isEqual:(id)a0;
- (id)_initWithRepeats:(BOOL)a0;
- (double)_retroactiveTriggerHysteresis;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)nextTriggerDateAfterLastTriggerDate:(id)a0 withRequestedDate:(id)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
