@class NSObject;
@protocol OS_dispatch_queue;

@interface SRXPCConnection : CSXPCConnection {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _spid;
}

+ (id)sharedConnection;

- (id)init;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 sync:(BOOL)a1 completion:(id /* block */)a2;

@end
