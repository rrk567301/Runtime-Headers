@interface CalAgentLightweightClient : NSObject <CalendarAgentClient>

- (void)calDavSharedUIDChanged:(id)a0;
- (void)calPersistanceNotification:(id)a0 userInfo:(id)a1;
- (void)agentUpdatedCache:(id)a0;

@end
