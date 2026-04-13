@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSEngagementServiceProtocol;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) id<AMSEngagementServiceProtocol> proxy;
@property (copy) id /* block */ errorHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (void)handlePushedEvent:(id)a0;
- (id)_makeRemoteConnectionInterface;
- (id)_makeExportedClientConnectionInterface;

@end
