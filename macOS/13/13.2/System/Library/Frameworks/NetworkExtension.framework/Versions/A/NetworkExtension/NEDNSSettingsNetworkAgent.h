@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings;

+ (id)agentFromData:(id)a0;
+ (id)agentDomain;
+ (id)agentType;

- (void).cxx_destruct;
- (id)copyAgentData;
- (id)agentDescription;

@end
