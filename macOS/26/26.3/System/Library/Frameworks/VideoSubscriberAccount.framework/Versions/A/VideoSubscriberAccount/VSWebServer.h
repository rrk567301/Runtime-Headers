@class NSObject;
@protocol OS_dispatch_queue, VSWebServerDelegate;

@interface VSWebServer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) struct _CFHTTPServer { } *server;
@property (readonly, nonatomic) unsigned short port;
@property (weak, nonatomic) id<VSWebServerDelegate> delegate;

- (void)invalidate;
- (id)initWithPort:(unsigned short)a0;
- (void)suspend;
- (id)description;
- (id)init;
- (void)resume;
- (id)name;
- (void).cxx_destruct;
- (void)dealloc;
- (id)serviceType;

@end
