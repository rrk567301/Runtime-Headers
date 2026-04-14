@class NSObject;
@protocol OS_dispatch_queue;

@interface LNUnlockService : NSObject

@property (class, readonly, nonatomic) BOOL isDeviceLocked;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestUnlockIfNeeded:(id /* block */)a0;

@end
