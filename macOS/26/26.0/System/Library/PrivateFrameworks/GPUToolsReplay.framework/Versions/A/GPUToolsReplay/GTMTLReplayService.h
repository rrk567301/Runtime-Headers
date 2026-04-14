@class NSURL, GTObservableService, NSObject;
@protocol OS_xpc_object;

@interface GTMTLReplayService : NSObject <GTMTLReplayService, GTMTLReplayServiceObserver> {
    struct GTMTLReplayClient { struct apr_pool_t *x0; struct GTMTLReplayController *x1; unsigned long long x2; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; double x3; unsigned int x4; unsigned int x5; } x3; struct { struct { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; float x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 28; } x4; id x5; struct GTMTLReplayWireframeRenderer { id x0; struct GTMTLReplayWireframeRenderPassDescriptor { id x0; id x1; unsigned short x2; BOOL x3; unsigned char x4[5]; } x1; unsigned long long x2; id x3; id x4; id x5; id x6; unsigned long long x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; } x6; struct GTMTLReplayOperationQueues { id x0; id x1; id x2; } x7; id x8; id x9; } *_clientContext;
    NSURL *_gputrace;
    NSObject<OS_xpc_object> *_terminatePath;
    NSObject<OS_xpc_object> *_terminateConnection;
    GTObservableService *_observers;
}

@property (nonatomic) unsigned long long servicePort;

- (BOOL)pause:(unsigned long long)a0;
- (BOOL)cancel:(unsigned long long)a0;
- (void)display:(id)a0;
- (id)initWithContext:(struct GTMTLReplayClient { struct apr_pool_t *x0; struct GTMTLReplayController *x1; unsigned long long x2; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; double x3; unsigned int x4; unsigned int x5; } x3; struct { struct { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; float x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 28; } x4; id x5; struct GTMTLReplayWireframeRenderer { id x0; struct GTMTLReplayWireframeRenderPassDescriptor { id x0; id x1; unsigned short x2; BOOL x3; unsigned char x4[5]; } x1; unsigned long long x2; id x3; id x4; id x5; id x6; unsigned long long x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; id x20; } x6; struct GTMTLReplayOperationQueues { id x0; id x1; id x2; } x7; id x8; id x9; } *)a0;
- (unsigned long long)registerObserver:(id)a0;
- (id)update:(id)a0;
- (id)fetch:(id)a0;
- (void).cxx_destruct;
- (void)terminateProcess;
- (BOOL)resume:(unsigned long long)a0;
- (id)decode:(id)a0;
- (BOOL)load:(id)a0 error:(id *)a1;
- (id)query:(id)a0;
- (void)broadcastDisconnect:(id)a0 path:(id)a1;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)deregisterObserversForConnection:(id)a0 path:(id)a1;
- (id)fetchInto:(id)a0;
- (void)fetchIntoOperation:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyError:(id)a0;
- (id)profile:(id)a0;
- (id)raytrace:(id)a0;
- (id)shaderdebug:(id)a0;

@end
