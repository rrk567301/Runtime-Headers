@class NSObject;
@protocol OS_dispatch_queue;

@interface MRScreenMirroringObserver : NSObject

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long deviceCount;

+ (id)observerWithStateChangeCallback:(id /* block */)a0;
+ (id)UIControllingObserver;

- (void)_init;
- (void).cxx_destruct;
- (void)_contextChangeNotification:(id)a0;
- (id)initWithStateChangeCallback:(id /* block */)a0;
- (void)_notifyIfNeeded;

@end
