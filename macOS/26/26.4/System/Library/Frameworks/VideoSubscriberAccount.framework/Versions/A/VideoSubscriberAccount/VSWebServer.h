@class NSObject;
@protocol OS_dispatch_queue, VSWebServerDelegate;

@interface VSWebServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) struct _CFHTTPServer { } *server;
@property (readonly, nonatomic) unsigned short port;
@property (weak, nonatomic) id<VSWebServerDelegate> delegate;

- (id)initWithPort:(unsigned short)a0;
- (void)resume;
- (id)name;
- (id)serviceType;
- (void)suspend;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)description;
- (void)dealloc;

@end
