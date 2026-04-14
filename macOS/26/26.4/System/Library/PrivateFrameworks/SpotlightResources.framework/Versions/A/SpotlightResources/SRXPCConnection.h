@class NSObject;
@protocol OS_dispatch_queue;

@interface SRXPCConnection : CSXPCConnection {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _spid;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)init;
- (void)handleReply:(id)a0 completion:(id /* block */)a1;
- (void)sendCommand:(unsigned long long)a0 info:(id)a1 sync:(BOOL)a2 completion:(id /* block */)a3;

@end
