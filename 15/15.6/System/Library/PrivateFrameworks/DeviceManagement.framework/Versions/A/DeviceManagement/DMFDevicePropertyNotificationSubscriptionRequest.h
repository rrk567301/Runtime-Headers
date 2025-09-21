@class NSArray;

@interface DMFDevicePropertyNotificationSubscriptionRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
