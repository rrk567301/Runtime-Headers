@class NSString, NSUUID, NSArray;

@interface NEPolicyResult : NSObject <NEPrettyDescription> {
    unsigned int _skipOrder;
    unsigned int _passFlags;
    unsigned int _dropFlags;
    unsigned int _controlUnit;
    unsigned int _effectiveType;
    unsigned int _serviceData;
    long long _secondaryResultType;
    NSString *_interfaceName;
    NSUUID *_agentUUID;
    NSString *_agentDomain;
    NSString *_agentType;
    NSArray *_routeRules;
}

@property long long resultType;

+ (id)drop;
+ (id)tunnelIPToInterfaceName:(id)a0 secondaryResultType:(long long)a1;
+ (id)passWithFlags:(unsigned int)a0;
+ (id)prohibitFilters;
+ (id)scopeToDirectInterface;
+ (id)removeNetworkAgentDomain:(id)a0 agentType:(id)a1;
+ (id)routeRules:(id)a0;
+ (id)filterWithControlUnit:(unsigned int)a0;
+ (id)dropWithFlags:(unsigned int)a0;
+ (id)divertSocketToControlUnit:(unsigned int)a0;
+ (id)skipWithOrder:(unsigned int)a0;
+ (id)netAgentUUID:(id)a0;
+ (id)scopedNetworkAgent:(id)a0;
+ (id)removeNetworkAgentUUID:(id)a0;
+ (id)allowUnentitled;
+ (id)scopeSocketToInterfaceName:(id)a0;
+ (id)pass;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
