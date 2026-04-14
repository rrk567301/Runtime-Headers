@class NSMutableDictionary;

@interface AAAccessoryFeatureFlagRules : NSObject {
    NSMutableDictionary *_rulesByFeatureID;
}

+ (id)defaultRules;

- (void).cxx_destruct;
- (id)init;
- (void)addRuleForFeatureID:(unsigned char)a0 stateDeterminer:(id /* block */)a1;
- (void)addRuleForFeatureID:(unsigned char)a0 stateDeterminer:(id /* block */)a1 payloadGenerator:(id /* block */)a2;
- (id)applyRulesToAccessory:(id)a0;

@end
