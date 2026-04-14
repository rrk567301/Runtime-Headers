@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent

@property (retain) NSData *agentData;

+ (id)agentDomain;
+ (id)agentType;
+ (id)agentFromData:(id)a0;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;
- (id)initWithProxyConfiguration:(id)a0;

@end
