@class NSObject, BSServiceConnection;
@protocol BSServiceConnectionClient, OS_dispatch_queue;

@interface NFBSClient_BackgroundTagReading : NSObject

@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL invalidated;

+ (id)sharedClient;

- (id)_init;
- (void)invalidate;
- (id)remoteTarget;
- (void)_activate;
- (void)activate;
- (void).cxx_destruct;
- (void)_invalidateFromRemote:(BOOL)a0;

@end
