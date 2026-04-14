@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AESystemNotificationObservation : NSObject <AEObservation>

@property (readonly, copy, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ notificationHandler;

+ (id)observationWithNotificationName:(id)a0 queue:(id)a1 notificationHandler:(id /* block */)a2;

- (void)fire;
- (void)invalidate;
- (void)beginObserving;
- (void).cxx_destruct;
- (id)initWithNotificationName:(id)a0 queue:(id)a1 notificationHandler:(id /* block */)a2;

@end
