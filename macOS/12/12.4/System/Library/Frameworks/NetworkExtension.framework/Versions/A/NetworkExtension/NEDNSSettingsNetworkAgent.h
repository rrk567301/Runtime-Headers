@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings;

+ (id)agentDomain;
+ (id)agentType;
+ (id)agentFromData:(id)a0;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;

@end
