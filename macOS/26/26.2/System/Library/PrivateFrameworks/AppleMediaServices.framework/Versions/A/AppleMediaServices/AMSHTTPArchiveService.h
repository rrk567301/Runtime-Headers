@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain) NSXPCConnection *connection;
@property (copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:(id)a0;

- (void).cxx_destruct;
- (void)_removeRemoteConnection;
- (id)_createProxy;
- (id)init;
- (id)_createRemoteConnection;
- (void)dealloc;

@end
