@class PKPendingProvisioning;

@interface PKPendingProvisioningChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKPendingProvisioning *pendingProvisioning;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 pendingProvisioning:(id)a1;

@end
