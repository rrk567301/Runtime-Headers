@class BMAccessServiceListener;
@protocol BMAccessDelegate;

@interface BMAccessServer : NSObject <BMAccessServer> {
    BMAccessServiceListener *_listener;
}

@property (retain, nonatomic) id<BMAccessDelegate> delegate;

- (void).cxx_destruct;
- (void)requestBiomeEndpoint:(BOOL)a0 reply:(id /* block */)a1;
- (id)initWithListener:(id)a0;
- (BOOL)_createDirectoryAtPath:(id)a0;
- (BOOL)_hasDirectoryAtPath:(id)a0;
- (void)_macOS_excludeDirectoryFromBackup:(id)a0;
- (BOOL)_removeDirectoryAtPath:(id)a0;
- (id)endpointForBiomeAgentOfUser:(unsigned int)a0 error:(id *)a1;
- (void)removeResource:(id)a0 reply:(id /* block */)a1;
- (void)requestAccessToResource:(id)a0 withMode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)requestBiomeEndpointForAppScopedService:(unsigned long long)a0 user:(unsigned int)a1 reply:(id /* block */)a2;
- (void)requestBiomeEndpointForUser:(unsigned int)a0 reply:(id /* block */)a1;

@end
