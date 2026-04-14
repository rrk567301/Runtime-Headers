@class NSObject;
@protocol OS_nw_proxy_config;

@interface NERelayNetworkAgent : NENetworkAgent

@property (retain) NSObject<OS_nw_proxy_config> *proxyConfig;

+ (id)agentFromData:(id)a0;
+ (id)agentType;
+ (id)agentDomain;

- (void).cxx_destruct;
- (id)copyAgentData;
- (id)agentDescription;

@end
