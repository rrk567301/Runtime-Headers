@class HardwarePolicyMaker, IOControllerPolicyMaker;

@interface ConfigurationPolicyManager : NSObject

@property (readonly, nonatomic) HardwarePolicyMaker *hardwarePolicyMaker;
@property (readonly, nonatomic) IOControllerPolicyMaker *ioControllerPolicyMaker;

- (void).cxx_destruct;
- (id)initWithDatabaseController:(id)a0;

@end
