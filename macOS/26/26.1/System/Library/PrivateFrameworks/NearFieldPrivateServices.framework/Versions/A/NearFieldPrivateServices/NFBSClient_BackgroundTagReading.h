@class NSObject, BSServiceConnection;
@protocol BSServiceConnectionClient, OS_dispatch_queue;

@interface NFBSClient_BackgroundTagReading : NSObject

@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL invalidated;

+ (id)sharedClient;

- (void)_activate;
- (void)invalidate;
- (void)activate;
- (id)_init;
- (id)remoteTarget;
- (void).cxx_destruct;
- (void)_invalidateFromRemote:(BOOL)a0;

@end
