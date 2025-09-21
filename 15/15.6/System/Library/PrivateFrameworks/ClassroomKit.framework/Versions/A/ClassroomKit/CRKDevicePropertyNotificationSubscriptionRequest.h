@class NSArray;

@interface CRKDevicePropertyNotificationSubscriptionRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *propertyKeys;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
