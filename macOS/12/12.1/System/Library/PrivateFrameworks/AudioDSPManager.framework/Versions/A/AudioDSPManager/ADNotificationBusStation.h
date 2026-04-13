@interface ADNotificationBusStation : NSObject

@property (readonly, nonatomic) struct shared_ptr<AudioNotification::BusStation> { struct BusStation *__ptr_; struct __shared_weak_count *__cntrl_; } station;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct shared_ptr<AudioNotification::BusStation> { struct BusStation *x0; struct __shared_weak_count *x1; })busStation;
- (id)busForTopic:(id)a0;
- (id)createBusForTopic:(id)a0;

@end
