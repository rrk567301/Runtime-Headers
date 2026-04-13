@class NSString, NSUUID;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription>

@property long long action;
@property (copy) NSString *interfaceName;
@property (copy) NSUUID *matchNetworkAgent;
@property long long type;
@property (retain) NSUUID *networkAgentUUID;
@property unsigned int controlUnit;

+ (id)routeRuleWithAction:(long long)a0 forInterfaceName:(id)a1;
+ (id)routeRuleWithAction:(long long)a0 forType:(long long)a1;
+ (id)routeRuleWithAction:(long long)a0 forNetworkAgent:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)typeString;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initInternal;
- (BOOL)addTLVsToMessage:(id)a0;
- (id)actionString;
- (unsigned char)actionValue;
- (unsigned char)typeValue;

@end
