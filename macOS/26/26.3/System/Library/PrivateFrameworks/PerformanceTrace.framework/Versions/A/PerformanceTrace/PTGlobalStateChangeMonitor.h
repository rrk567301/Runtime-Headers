@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface PTGlobalStateChangeMonitor : NSObject

@property (readonly, nonatomic) id /* block */ stateChangeBlock;
@property (readonly, nonatomic) NSNumber *notify_token;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithQueue:(id)a0 stateChangeBlock:(id /* block */)a1;

@end
