@interface LANotificationOfBooleanState : LANotification

@property (readonly, nonatomic) char boolValue;
@property (readonly, nonatomic) char oldBoolValue;

+ (void)postNotificationWithNewBoolState:(char)a0;

- (id)darwinNotificationForBoolValue:(char)a0;
- (id)darwinNotificationForValue:(id)a0;

@end
