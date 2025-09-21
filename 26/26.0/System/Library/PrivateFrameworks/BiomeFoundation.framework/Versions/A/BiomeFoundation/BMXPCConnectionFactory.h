@class NSString;
@protocol BMXPCConnectionFactoryDelegate;

@interface BMXPCConnectionFactory : NSObject {
    unsigned long long _serviceType;
    unsigned long long _domain;
    NSString *_path;
    unsigned int _user;
    NSString *_useCase;
    unsigned char _options;
}

@property (class, weak) id<BMXPCConnectionFactoryDelegate> delegate;

@property (weak) id<BMXPCConnectionFactoryDelegate> delegate;

+ (id)defaultQueue;
+ (void)_configureConnection:(id)a0 serviceType:(unsigned long long)a1 useCase:(id)a2;
+ (id)connectionToAccessServerInDomain:(unsigned long long)a0 user:(unsigned int)a1 useCase:(id)a2 options:(unsigned char)a3;
+ (id)connectionToComputeSourceServerInDomain:(unsigned long long)a0 user:(unsigned int)a1 useCase:(id)a2 options:(unsigned char)a3;
+ (id)connectionToFileServerInDomain:(unsigned long long)a0 user:(unsigned int)a1 useCase:(id)a2 options:(unsigned char)a3;
+ (id)connectionToMachService:(unsigned long long)a0 endpoint:(id)a1 useCase:(id)a2;
+ (id)globalStrongConnectionCache;
+ (id)globalWeakConnectionCache;
+ (id)remoteObjectInterfaceForMachServiceType:(unsigned long long)a0;

- (unsigned int)user;
- (id)machServiceName;
- (id)_newConnection;
- (void)_configureConnection:(id)a0;
- (void).cxx_destruct;
- (id)_proxyConnectionThroughCoreDuet;
- (unsigned long long)_connectionFlags;
- (id)_legacyUserDomainConnection;
- (id)_proxyConnectionThroughBiomeDaemon;
- (id)_regularConnection;
- (id)_requestConnectionFromCaller;
- (id)_targetUserConnection;
- (BOOL)connectionIsCrossUser;
- (id)coreDuetMachService;
- (BOOL)currentProcessCanDirectlyConnectCrossUser;
- (id)initWithType:(unsigned long long)a0 domain:(unsigned long long)a1 user:(unsigned int)a2 useCase:(id)a3 options:(unsigned char)a4;
- (id)makeConnectionWrapper;

@end
