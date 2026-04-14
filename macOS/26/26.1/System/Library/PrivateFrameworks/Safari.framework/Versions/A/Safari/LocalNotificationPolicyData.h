@class NSString;

@interface LocalNotificationPolicyData : UserNotificationPolicyData

@property (readonly, nonatomic) NSString *originString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOrigin:(id)a0 policy:(int)a1;
- (void)updatePermission:(int)a0;

@end
