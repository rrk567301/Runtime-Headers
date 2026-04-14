@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain) NSXPCConnection *connection;
@property (copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (void)recordTrafficWithTaskInfo:(id)a0;
+ (id)_sharedProxy;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_createRemoteConnection;
- (void)_removeRemoteConnection;
- (id)_createProxy;

@end
