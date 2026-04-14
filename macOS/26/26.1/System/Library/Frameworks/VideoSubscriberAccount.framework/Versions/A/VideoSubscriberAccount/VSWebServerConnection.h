@class NSObject;
@protocol OS_dispatch_queue, VSWebServerConnectionDelegate;

@interface VSWebServerConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (readonly, nonatomic) struct _CFHTTPServerConnection { } *connection;
@property (weak, nonatomic) id<VSWebServerConnectionDelegate> delegate;

- (void)resume;
- (id)server;
- (void)suspend;
- (void)invalidate;
- (id)initWithConnection:(struct _CFHTTPServerConnection { } *)a0;
- (void).cxx_destruct;

@end
