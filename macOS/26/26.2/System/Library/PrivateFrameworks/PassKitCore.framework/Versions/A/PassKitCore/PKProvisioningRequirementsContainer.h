@class NSString;

@interface PKProvisioningRequirementsContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL containsNotManagedAccount;
@property (retain, nonatomic) id container;
@property (retain, nonatomic) NSString *provisioningSID;

- (id)initWithContainer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)displayableError;
- (id)requirementsByRemovingRequirements:(id)a0;

@end
