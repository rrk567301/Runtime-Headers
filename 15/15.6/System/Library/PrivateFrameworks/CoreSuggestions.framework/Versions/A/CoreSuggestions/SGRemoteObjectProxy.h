@class SGDaemonConnection;
@protocol SGDSuggestManagerAllProtocol;

@interface SGRemoteObjectProxy : NSObject <SGDSuggestManagerAllProtocol> {
    SGDaemonConnection *_connection;
    id<SGDSuggestManagerAllProtocol> _inProcessSuggestManager;
    char _queuesRequestsIfBusy;
}

+ (id)_copyInvocationToHeapIfNeeded:(id)a0;

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (void)_forwardStackInvocation:(id)a0;
- (id)initWithConnection:(id)a0 queuesRequestsIfBusy:(char)a1;
- (id)initWithInProcessSuggestManager:(id)a0;

@end
