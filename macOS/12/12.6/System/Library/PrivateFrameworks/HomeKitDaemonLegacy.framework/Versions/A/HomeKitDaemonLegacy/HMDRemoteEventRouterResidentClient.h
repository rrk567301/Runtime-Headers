@interface HMDRemoteEventRouterResidentClient : HMDRemoteEventRouterClient

- (id)dumpStateDescription;
- (void)handleUpdatedPrimaryResidentNotification:(id)a0;
- (BOOL)clientIsEnabled:(id)a0;

@end
