@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain) NSXPCConnection *connection;
@property (copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:(id)a0;

- (id)_createRemoteConnection;
- (id)init;
- (void)_removeRemoteConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_createProxy;

@end
