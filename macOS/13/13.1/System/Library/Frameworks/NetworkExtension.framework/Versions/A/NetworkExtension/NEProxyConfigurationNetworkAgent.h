@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {
    NSData *_agentData;
}

+ (id)agentFromData:(id)a0;
+ (id)agentDomain;
+ (id)agentType;

- (void).cxx_destruct;
- (id)copyAgentData;
- (id)agentDescription;
- (id)initWithProxyConfiguration:(id)a0;

@end
