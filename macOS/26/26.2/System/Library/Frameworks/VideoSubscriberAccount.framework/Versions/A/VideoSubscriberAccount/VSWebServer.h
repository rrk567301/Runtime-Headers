@class NSObject;
@protocol OS_dispatch_queue, VSWebServerDelegate;

@interface VSWebServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) struct _CFHTTPServer { } *server;
@property (readonly, nonatomic) unsigned short port;
@property (weak, nonatomic) id<VSWebServerDelegate> delegate;

- (id)initWithPort:(unsigned short)a0;
- (void)invalidate;
- (id)serviceType;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)init;
- (void)dealloc;

@end
