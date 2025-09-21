@class NSArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NSFileAccessProcessManager : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _pid;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _suspensionHandler;
    NSArray *_urls;
    id _assertionToken;
    int _pendingMessageCount;
}

@property (copy) id /* block */ suspensionHandler;
@property (copy) NSArray *URLs;

+ (BOOL)needToManageConnection:(id)a0 forURLs:(id)a1;

- (void)allowSuspension;
- (void)dealloc;
- (void)invalidate;
- (void)killProcessWithMessage:(id)a0;
- (void)preventSuspensionWithActivityName:(id)a0;
- (void)_ensureMonitor;
- (void)processSuspended;
- (void)safelySendMessageWithReplyUsingBlock:(id /* block */)a0;
- (id)initWithClient:(id)a0 queue:(id)a1;

@end
