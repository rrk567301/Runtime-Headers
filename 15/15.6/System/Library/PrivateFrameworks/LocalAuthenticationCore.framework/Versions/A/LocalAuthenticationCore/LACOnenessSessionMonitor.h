@class NSObject;
@protocol OS_dispatch_queue, LACOnenessSessionMonitoring;

@interface LACOnenessSessionMonitor : NSObject <LACOnenessSessionMonitoring> {
    id<LACOnenessSessionMonitoring> _model;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (nonatomic, readonly) char isMonitoring;
@property (nonatomic, readonly) char isSessionActive;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)model;
- (id)replyQueue;
- (id)initWithReplyQueue:(id)a0;
- (id)makeModel;

@end
