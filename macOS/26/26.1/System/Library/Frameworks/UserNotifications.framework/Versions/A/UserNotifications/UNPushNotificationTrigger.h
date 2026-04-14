@interface UNPushNotificationTrigger : UNNotificationTrigger

@property (readonly) BOOL isContentAvailable;
@property (readonly) BOOL isMutableContent;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;
- (BOOL)isEqual:(id)a0;

@end
