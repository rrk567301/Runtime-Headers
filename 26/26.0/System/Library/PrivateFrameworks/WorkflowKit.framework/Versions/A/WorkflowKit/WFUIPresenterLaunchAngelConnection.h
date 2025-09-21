@class NSString, BSServiceConnection;
@protocol BSServiceConnectionClient, WFUIPresenterHostInterface;

@interface WFUIPresenterLaunchAngelConnection : NSObject <WFUIPresenterConnection>

@property (nonatomic) BOOL connectionInterrupted;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } hostLock;
@property (nonatomic) id<WFUIPresenterHostInterface> host;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)presenterWithErrorHandler:(id /* block */)a0;
- (void)cleanUpWithReason:(id)a0;
- (void)prepareConnectionIfNecessary;

@end
