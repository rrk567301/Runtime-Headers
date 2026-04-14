@class NSObject;
@protocol OS_dispatch_queue, VSWebServerDelegate;

@interface VSWebServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) struct _CFHTTPServer { } *server;
@property (readonly, nonatomic) unsigned short port;
@property (weak, nonatomic) id<VSWebServerDelegate> delegate;

- (id)initWithPort:(unsigned short)a0;
- (void)dealloc;
- (void)invalidate;
- (id)serviceType;
- (void)suspend;
- (void)resume;
- (id)init;
- (id)description;
- (id)name;
- (void).cxx_destruct;

@end
