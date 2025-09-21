@interface CRKIDSLocalSimulationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char shouldForceAccountsInactive;
@property (nonatomic) char shouldForceRemoteUsersNotRegistered;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
