@interface CRKRemoteConnectionRequest : CATTaskRequest

@property (nonatomic) double notificationDuration;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
