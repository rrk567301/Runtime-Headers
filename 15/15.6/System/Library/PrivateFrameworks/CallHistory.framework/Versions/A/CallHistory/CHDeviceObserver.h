@class CHNotifyObserver, NSObject;
@protocol OS_dispatch_queue, CHDeviceDataSource;

@interface CHDeviceObserver : CHDelegateManager

@property (nonatomic, getter=isBootLockEnabled) char bootLockEnabled;
@property (readonly, nonatomic) id<CHDeviceDataSource> dataSource;
@property (retain, nonatomic) CHNotifyObserver *firstUnlockNotifyObserver;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 dataSource:(id)a1;
- (void)performDelegateSelector:(SEL)a0 withDelegate:(id)a1;

@end
