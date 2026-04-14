@interface CRKPostUserNotificationRequest : CATTaskRequest

@property (nonatomic) long long notificationType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
