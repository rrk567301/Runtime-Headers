@class AKXPCConnectionConfiguration, NSXPCConnection;

@interface AKClientConnectionLifecycleManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) AKXPCConnectionConfiguration *serviceConnectionConfig;

- (id)initWithConfiguration:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)activeServiceConnection;
- (void)teardownServiceConnection;

@end
