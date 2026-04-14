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

+ (id)prohibitFilters;
+ (id)skipWithOrder:(unsigned int)a0;
+ (id)scopeToDirectInterface;
+ (id)divertSocketToControlUnit:(unsigned int)a0;
+ (id)scopeSocketToInterfaceName:(id)a0;
+ (id)passWithFlags:(unsigned int)a0;
+ (id)pass;
+ (id)netAgentUUID:(id)a0;
+ (id)tunnelIPToInterfaceName:(id)a0 secondaryResultType:(long long)a1;
+ (id)routeRules:(id)a0;
+ (id)drop;
+ (id)filterWithControlUnit:(unsigned int)a0;
+ (id)scopedNetworkAgent:(id)a0;
+ (id)removeNetworkAgentUUID:(id)a0;
+ (id)dropWithFlags:(unsigned int)a0;
+ (id)removeNetworkAgentDomain:(id)a0 agentType:(id)a1;
+ (id)allowUnentitled;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
