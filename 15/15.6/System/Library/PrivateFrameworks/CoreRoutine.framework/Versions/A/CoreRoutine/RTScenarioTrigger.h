@interface RTScenarioTrigger : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)scenarioTriggerSettledStateToString:(unsigned long long)a0;
+ (id)scenarioTriggerTypeToString:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0;

@end
