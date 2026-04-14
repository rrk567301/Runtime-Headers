@class NSString;
@protocol BMAccessConnectionFactoryDelegate;

@interface BMAccessConnectionFactory : NSObject {
    unsigned long long _serviceType;
    unsigned long long _domain;
    NSString *_path;
    unsigned int _user;
    NSString *_useCase;
}

@property (class, weak) id<BMAccessConnectionFactoryDelegate> delegate;

@property (weak) id<BMAccessConnectionFactoryDelegate> delegate;

+ (id)defaultQueue;
+ (void)_configureConnection:(id)a0 interface:(id)a1 useCase:(id)a2;
+ (id)connectionToAccessServerInDomain:(unsigned long long)a0 user:(unsigned int)a1 useCase:(id)a2;
+ (id)connectionToFileServerInDomain:(unsigned long long)a0 user:(unsigned int)a1 useCase:(id)a2;
+ (id)globalStrongConnectionCache;
+ (id)globalWeakConnectionCache;

- (void).cxx_destruct;
- (unsigned int)user;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (unsigned long long)_connectionFlags;
- (void)_configureConnection:(id)a0;
- (id)_newConnection;
- (id)makeConnection;
- (id)_proxyConnectionThroughCoreDuet;
- (id)_legacyUserDomainConnection;
- (id)_proxyConnectionToBiomeAgentThroughBiomeDaemon;
- (id)_regularConnection;
- (id)_requestConnectionFromCaller;
- (id)_targetUserConnection;
- (BOOL)connectionIsCrossUser;
- (id)coreDuetMachService;
- (BOOL)currentProcessCanDirectlyConnectCrossUser;
- (id)initWithType:(unsigned long long)a0 domain:(unsigned long long)a1 user:(unsigned int)a2 useCase:(id)a3;

@end
