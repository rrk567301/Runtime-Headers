@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain) NSXPCConnection *connection;
@property (copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (void)recordTrafficWithTaskInfo:(id)a0;
+ (id)_sharedProxy;

- (id)_createRemoteConnection;
- (void)_removeRemoteConnection;
- (id)_createProxy;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
