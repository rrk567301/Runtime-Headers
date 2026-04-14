@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSUniversalLinksServiceProtocol;

@interface AMSUniversalLinksConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<AMSUniversalLinksServiceProtocol> proxy;

- (void)dealloc;
- (void)_removeRemoteConnection;
- (id)_makeRemoteConnectionInterface;
- (id)init;
- (id)_newRemoteConnection;
- (void).cxx_destruct;

@end
