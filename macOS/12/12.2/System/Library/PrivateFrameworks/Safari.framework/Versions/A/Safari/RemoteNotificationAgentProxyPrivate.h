@interface RemoteNotificationAgentProxyPrivate : NSObject <SafariNotificationAgentProxy>

- (void)agentDidVerifyRemoteNotificationProviderRequest:(unsigned long long)a0 withResult:(int)a1 websiteName:(id)a2 lowResIcon:(id)a3 highResIcon:(id)a4 errorMessages:(id)a5;
- (void)agentDidRegisterForRemoteNotifications:(unsigned long long)a0 allowedDomains:(id)a1 deviceToken:(id)a2;
- (void)agentDidUnregisterForRemoteNotifications:(unsigned long long)a0 disallowedDomains:(id)a1;

@end
