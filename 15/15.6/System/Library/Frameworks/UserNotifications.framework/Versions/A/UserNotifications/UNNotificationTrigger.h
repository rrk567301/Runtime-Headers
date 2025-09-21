@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char repeats;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)nextTriggerDate;
- (id)_initWithRepeats:(char)a0;
- (double)_retroactiveTriggerHysteresis;
- (id)nextTriggerDateAfterDate:(id)a0 withRequestedDate:(id)a1;
- (id)nextTriggerDateAfterLastTriggerDate:(id)a0 withRequestedDate:(id)a1;
- (char)willTriggerAfterDate:(id)a0 withRequestedDate:(id)a1;

@end
