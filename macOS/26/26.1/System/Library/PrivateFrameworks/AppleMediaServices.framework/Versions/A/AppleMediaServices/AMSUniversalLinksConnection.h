@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSUniversalLinksServiceProtocol;

@interface AMSUniversalLinksConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<AMSUniversalLinksServiceProtocol> proxy;

- (void)_removeRemoteConnection;
- (void)dealloc;
- (id)_makeRemoteConnectionInterface;
- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (id)init;

@end
