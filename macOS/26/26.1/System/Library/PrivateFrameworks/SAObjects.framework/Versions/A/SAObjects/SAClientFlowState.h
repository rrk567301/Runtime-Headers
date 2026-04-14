@class NSDictionary;

@interface SAClientFlowState : SAAceClientState

@property (copy, nonatomic) NSDictionary *cachedDomainClassJavascriptChecksumMap;

+ (id)clientFlowState;
+ (id)clientFlowStateWithDictionary:(id)a0 context:(id)a1;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
