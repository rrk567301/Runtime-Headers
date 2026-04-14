@interface CRKRemoteConnectionRequest : CATTaskRequest

@property (nonatomic) double notificationDuration;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
