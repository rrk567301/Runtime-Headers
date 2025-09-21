@interface UNPushNotificationTrigger : UNNotificationTrigger

@property (readonly) char isContentAvailable;
@property (readonly) char isMutableContent;

+ (char)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(char)a0 mutableContent:(char)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentAvailable:(char)a0 mutableContent:(char)a1;

@end
