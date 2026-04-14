@interface DMFSetBluetoothEnabledRequest : DMFTaskRequest

@property (nonatomic) BOOL enabled;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
