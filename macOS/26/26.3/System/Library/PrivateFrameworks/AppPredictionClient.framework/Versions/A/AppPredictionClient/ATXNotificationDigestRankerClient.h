@class NSString, NSXPCConnection;

@interface ATXNotificationDigestRankerClient : NSObject <ATXNotificationDigestRankerInterface> {
    NSXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)generateDigestForAppGroupedNotificationStacks:(id)a0 maxGlobalMarqueeGroups:(unsigned long long)a1 maxAppMarqueeGroups:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;
- (void)generateDigestForNotificationStacks:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;

@end
