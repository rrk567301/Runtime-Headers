@interface PKProvisioningRequirementsContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id container;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainer:(id)a0;
- (id)requirementsByRemovingRequirements:(id)a0;

@end
