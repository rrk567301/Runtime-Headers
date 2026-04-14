@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface SMHeartbeatTimer : NSObject

@property (retain, nonatomic) NSTimer *heartbeatTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)init;
- (void)_startHeartbeatForSessionID:(id)a0 handler:(id /* block */)a1;
- (void)_stopHeartbeatWithHandler:(id /* block */)a0;
- (void)startHeartbeatForSessionID:(id)a0 handler:(id /* block */)a1;
- (void)stopHeartbeatWithHandler:(id /* block */)a0;

@end
