@class NSObject;
@protocol OS_dispatch_queue, VSWebServerDelegate;

@interface VSWebServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) struct _CFHTTPServer { } *server;
@property (readonly, nonatomic) unsigned short port;
@property (weak, nonatomic) id<VSWebServerDelegate> delegate;

- (void)resume;
- (void)suspend;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPort:(unsigned short)a0;
- (id)name;
- (id)serviceType;
- (id)init;

@end
