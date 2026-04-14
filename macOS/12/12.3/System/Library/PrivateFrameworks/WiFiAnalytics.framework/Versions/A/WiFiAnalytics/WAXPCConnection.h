@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, WAXPCConnectionDelegate;

@interface WAXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *token;
@property (weak, nonatomic) id<WAXPCConnectionDelegate> delegate;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)establishConnectionWithToken:(id)a0 andReply:(id /* block */)a1;
- (void)registerMessageGroup:(long long)a0 andReply:(id /* block */)a1;
- (void)getMessageForUUID:(id)a0 andReply:(id /* block */)a1;
- (void)getNewMessageForKey:(id)a0 groupType:(long long)a1 withCopy:(id)a2 andReply:(id /* block */)a3;
- (void)getNewMessageForKey:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)getMessagesModelForGroupType:(long long)a0 andReply:(id /* block */)a1;
- (void)submitMessage:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)submitWiFiAnalyticsMessage:(id)a0 andReply:(id /* block */)a1;
- (void)ingestMessage:(id)a0 andReply:(id /* block */)a1;
- (void)registerForQueryableMessageWithidentifierDict:(id)a0 groupType:(long long)a1 andReply:(id /* block */)a2;
- (void)clientConfigChangeDelegateSetForGroupType:(long long)a0 andReply:(id /* block */)a1;
- (void)triggerQueryForNWActivity:(long long)a0 andReply:(id /* block */)a1;
- (void)convertWiFiStatsIntoPercentile:(id)a0 analysisGroup:(long long)a1 groupTarget:(id)a2 andReply:(id /* block */)a3;
- (void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)a0 waMessage:(id)a1 andReply:(id /* block */)a2;
- (void)killDaemonAndReply:(id /* block */)a0;
- (void)clearMessageStoreAndReply:(id /* block */)a0;
- (void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)a0 andReply:(id /* block */)a1;
- (void)lqmCrashTracerNotifyForInterfaceWithName:(id)a0 andReply:(id /* block */)a1;
- (void)lqmCrashTracerReceiveBlock:(id)a0 forInterfaceWithName:(id)a1 andReply:(id /* block */)a2;
- (void)trigger11axPerfStudyAndReply:(id /* block */)a0;
- (void)setDeviceAnalyticsConfiguration:(id)a0 andReply:(id /* block */)a1;
- (void)getDeviceAnalyticsConfigurationAndReply:(id /* block */)a0;
- (void)summarizeDeviceAnalyticsForNetwork:(id)a0 maxAgeInDays:(unsigned long long)a1 andReply:(id /* block */)a2;
- (void)getDpsStatsandReply:(id /* block */)a0;
- (void)triggerDeviceAnalyticsStoreMigrationAndReply:(id /* block */)a0;
- (void)sendMemoryPressureRequestAndReply:(id /* block */)a0;

@end
