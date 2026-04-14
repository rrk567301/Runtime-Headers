@class NSString, NSXPCConnection;

@interface BMWriteService : NSObject <BMWriteServiceClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_useCase;
}

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)connectionInvalidated;
- (id)newConnection;
- (void).cxx_destruct;
- (id)initWithUseCase:(id)a0;
- (void)requestBiomeEndpointForAppScopedService:(unsigned long long)a0 user:(unsigned int)a1 reply:(id /* block */)a2;
- (BOOL)writeData:(id)a0 version:(unsigned int)a1 timestamp:(double)a2 toStream:(id)a3 asUser:(unsigned int)a4 error:(id *)a5;

@end
