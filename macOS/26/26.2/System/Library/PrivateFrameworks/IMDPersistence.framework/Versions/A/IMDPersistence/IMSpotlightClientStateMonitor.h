@class IMSpotlightClientState, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface IMSpotlightClientStateMonitor : NSObject

@property (copy, nonatomic) IMSpotlightClientState *clientState;
@property (readonly, nonatomic) NSLock *lock;
@property (readonly, nonatomic) int clientStateToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ changeHandler;

- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChangeHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_updateClientState;

@end
