@class NSObject, BSServiceConnection;
@protocol BSServiceConnectionClient, OS_dispatch_queue;

@interface NFBSClient_BackgroundTagReading : NSObject

@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL invalidated;

+ (id)sharedClient;

- (void)invalidate;
- (void)_activate;
- (id)_init;
- (void).cxx_destruct;
- (id)remoteTarget;
- (void)activate;
- (void)_invalidateFromRemote:(BOOL)a0;

@end
