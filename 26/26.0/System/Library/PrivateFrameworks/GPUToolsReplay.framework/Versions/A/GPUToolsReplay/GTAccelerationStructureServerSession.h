@class GTTransport_replayer, MTLCommandBufferDescriptor;

@interface GTAccelerationStructureServerSession : NSObject {
    struct GTMTLReplayClient { struct apr_pool_t *x0; struct GTMTLReplayController *x1; unsigned long long x2; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; double x3; unsigned int x4; unsigned int x5; } x3; struct { struct { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; float x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 28; } x4; id x5; struct GTMTLReplayWireframeRenderer { id x0; struct GTMTLReplayWireframeRenderPassDescriptor { id x0; id x1; unsigned short x2; BOOL x3; unsigned char x4[5]; } x1; unsigned long long x2; id x3; id x4; id x5; id x6; unsigned long long x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; } x6; struct GTMTLReplayOperationQueues { id x0; id x1; id x2; } x7; id x8; id x9; } *_clientContext;
    unsigned long long _functionIndex;
    GTTransport_replayer *_transport;
    id /* block */ _dataHandler;
    MTLCommandBufferDescriptor *_commandBufferDescriptor;
    struct Server { void /* function */ **x0; void /* function */ **x1; unsigned long long x2; struct Transport *x3; struct Sampler *x4; unsigned long long x5; id x6; id x7; id x8; int x9; id x10; id x11[4]; id x12[4]; char *x13[4]; char *x14[4]; unsigned long long x15[4]; } *_server;
    struct Sampler { void /* function */ **x0; struct DataSource *x1; unsigned long long x2; } *_sampler;
    struct Transport { void /* function */ **x0; } *_htransport;
    void *_dataSource;
}

@property unsigned long long requestID;
@property unsigned long long sessionID;

+ (void)sessionWithReplayClient:(struct GTMTLReplayClient { struct apr_pool_t *x0; struct GTMTLReplayController *x1; unsigned long long x2; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; double x3; unsigned int x4; unsigned int x5; } x3; struct { struct { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; float x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 28; } x4; id x5; struct GTMTLReplayWireframeRenderer { id x0; struct GTMTLReplayWireframeRenderPassDescriptor { id x0; id x1; unsigned short x2; BOOL x3; unsigned char x4[5]; } x1; unsigned long long x2; id x3; id x4; id x5; id x6; unsigned long long x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; } x6; struct GTMTLReplayOperationQueues { id x0; id x1; id x2; } x7; id x8; id x9; } *)a0 functionIndex:(unsigned long long)a1 requestID:(id)a2 transport:(id)a3 dataHandler:(id /* block */)a4 accelerationStructureKey:(unsigned long long)a5 completionHandler:(id /* block */)a6;

- (void)dealloc;
- (void).cxx_destruct;
- (void)receiveData:(id)a0;
- (void)nextSample:(unsigned long long)a0;

@end
