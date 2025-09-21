@class NSString;

@interface PKProvisioningRequirementsContainer : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char containsNotManagedAccount;
@property (retain, nonatomic) id container;
@property (retain, nonatomic) NSString *provisioningSID;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainer:(id)a0;
- (id)displayableError;
- (id)requirementsByRemovingRequirements:(id)a0;

@end
