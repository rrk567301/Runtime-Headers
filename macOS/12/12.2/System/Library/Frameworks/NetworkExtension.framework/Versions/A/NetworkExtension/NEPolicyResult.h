@class NSString, NSUUID, NSArray;

@interface NEPolicyResult : NSObject <NEPrettyDescription>

@property long long resultType;
@property long long secondaryResultType;
@property unsigned int skipOrder;
@property unsigned int passFlags;
@property unsigned int dropFlags;
@property unsigned int controlUnit;
@property (copy) NSString *interfaceName;
@property (copy) NSUUID *agentUUID;
@property (copy) NSUUID *serviceUUID;
@property unsigned int serviceData;
@property (copy) NSArray *routeRules;

+ (id)drop;
+ (id)divertSocketToControlUnit:(unsigned int)a0;
+ (id)pass;
+ (id)allowUnentitled;
+ (id)skipWithOrder:(unsigned int)a0;
+ (id)tunnelIPToInterfaceName:(id)a0 secondaryResultType:(long long)a1;
+ (id)scopeSocketToInterfaceName:(id)a0;
+ (id)filterWithControlUnit:(unsigned int)a0;
+ (id)prohibitFilters;
+ (id)triggerScopedService:(id)a0 data:(unsigned int)a1;
+ (id)routeRules:(id)a0;
+ (id)netAgentUUID:(id)a0;
+ (id)scopedNetworkAgent:(id)a0;
+ (id)removeNetworkAgentUUID:(id)a0;
+ (id)scopeToDirectInterface;
+ (id)passWithFlags:(unsigned int)a0;
+ (id)dropWithFlags:(unsigned int)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initInternal;
- (BOOL)addTLVsToMessage:(id)a0;
- (id)resultTypeString;
- (id)secondaryResultTypeString;
- (unsigned char)resultTypeValue;
- (unsigned char)secondaryResultTypeValue;

@end
