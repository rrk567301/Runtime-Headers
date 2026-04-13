@class ADNotificationBusStation, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_object;

@interface ADMNotificationManager : NSObject {
    struct queue { struct object { NSObject<OS_dispatch_object> *fObj; } fObj; } _notificationQueue;
    struct vector<std::any, std::allocator<std::any>> { struct any *__begin_; struct any *__end_; struct __compressed_pair<std::any *, std::allocator<std::any>> { struct any *__value_; } __end_cap_; } _typedSources;
}

@property (nonatomic) BOOL isScheduled;
@property (readonly, nonatomic) ADNotificationBusStation *busStation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationDispatchQueue;
@property (retain, nonatomic) NSMutableArray *dynamicSources;
@property (readonly, nonatomic) ADNotificationBusStation *notificationBusStation;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_schedule;
- (void)schedule;
- (void)unschedule;
- (id)initWithDatabaseController:(id)a0;
- (void)_unschedule;

@end
