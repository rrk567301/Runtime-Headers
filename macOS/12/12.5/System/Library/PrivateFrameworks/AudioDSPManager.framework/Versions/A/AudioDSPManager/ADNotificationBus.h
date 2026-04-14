@interface ADNotificationBus : NSObject

@property (nonatomic) struct shared_ptr<AudioNotification::DynamicBus> { struct DynamicBus *__ptr_; struct __shared_weak_count *__cntrl_; } bus;

+ (id)busWithDynamicBus:(struct shared_ptr<AudioNotification::DynamicBus> { struct DynamicBus *x0; struct __shared_weak_count *x1; })a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)signal:(id)a0;
- (id)registerDelegate:(id)a0;
- (void)unregisterDelegate:(id)a0;
- (id)initWithDynamicBus:(struct shared_ptr<AudioNotification::DynamicBus> { struct DynamicBus *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<AudioNotification::DynamicBus> { struct DynamicBus *x0; struct __shared_weak_count *x1; })dynamicBus;
- (id)registerEventHandler:(id)a0;
- (void)unregisterEventHandlerWithToken:(id)a0;

@end
