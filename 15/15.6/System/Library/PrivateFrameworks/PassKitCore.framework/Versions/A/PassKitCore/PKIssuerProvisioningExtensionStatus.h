@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char requiresAuthentication;
@property (nonatomic) char passEntriesAvailable;
@property (nonatomic) char remotePassEntriesAvailable;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
