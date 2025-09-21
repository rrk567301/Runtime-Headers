@interface DMFSetBluetoothEnabledRequest : DMFTaskRequest

@property (nonatomic) char enabled;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
