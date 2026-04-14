@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSUniversalLinksServiceProtocol;

@interface AMSUniversalLinksConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<AMSUniversalLinksServiceProtocol> proxy;

- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
