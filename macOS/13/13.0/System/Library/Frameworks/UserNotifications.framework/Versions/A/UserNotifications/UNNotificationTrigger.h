@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL repeats;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRepeats:(BOOL)a0;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterLastTriggerDate:(id)a0 withRequestedDate:(id)a1;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (BOOL)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;
- (double)_retroactiveTriggerHysteresis;

@end
