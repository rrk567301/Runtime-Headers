@class NSObject, BSServiceConnection;
@protocol BSServiceConnectionClient, OS_dispatch_queue;

@interface NFBSClient_BackgroundTagReading : NSObject

@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL invalidated;

+ (id)sharedClient;

- (id)_init;
- (void)activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_activate;
- (id)remoteTarget;
- (void)_invalidateFromRemote:(BOOL)a0;

@end
