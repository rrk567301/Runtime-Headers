@class NSSet;

@interface PKPassLiveDataConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *eligibleSemantics;

+ (id)_defaultEligibleSemanticsForPassStyle:(long long)a0;
+ (id)configurationForPassStyle:(long long)a0 excludingSemantics:(id)a1;
+ (id)defaultConfigurationForPassStyle:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)supportsLiveDataForSemanticKey:(id)a0;
- (id)_initWithEligibleSemantics:(id)a0;

@end
