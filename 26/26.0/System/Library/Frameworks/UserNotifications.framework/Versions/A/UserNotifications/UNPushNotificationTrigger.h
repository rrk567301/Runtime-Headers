@interface UNPushNotificationTrigger : UNNotificationTrigger

@property (readonly) BOOL isContentAvailable;
@property (readonly) BOOL isMutableContent;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;

- (id)_initWithContentAvailable:(BOOL)a0 mutableContent:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
