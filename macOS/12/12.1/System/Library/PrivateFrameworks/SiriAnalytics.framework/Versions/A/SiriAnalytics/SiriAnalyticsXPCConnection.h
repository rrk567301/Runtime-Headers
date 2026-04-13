@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface SiriAnalyticsXPCConnection : NSObject <SiriAnalyticsXPCService> {
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_group> *_xpcPublishingGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_currentConnection;
- (void)_idleTimerFired;
- (void)_stopIdleTimer;
- (void)_startIdleTimer;
- (void)barrierWithCompletion:(id /* block */)a0;
- (void)_publishMessages:(id)a0 completion:(id /* block */)a1;
- (void)_publishMessagesToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)publishMessages:(id)a0 completion:(id /* block */)a1;
- (void)_resolveMessages:(id)a0 completion:(id /* block */)a1;
- (void)_resolveMessagesAtRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)resolveMessages:(id)a0 completion:(id /* block */)a1;
- (oneway void)_publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (oneway void)_publishLargeMessageToRemote:(id)a0 attempts:(unsigned long long)a1 completion:(id /* block */)a2;
- (oneway void)publishLargeMessage:(id)a0 completion:(id /* block */)a1;
- (void)_cleanupConnection;

@end
