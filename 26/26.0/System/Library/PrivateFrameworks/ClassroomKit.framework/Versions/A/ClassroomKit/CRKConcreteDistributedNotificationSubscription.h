@class NSString;

@interface CRKConcreteDistributedNotificationSubscription : NSObject <CRKCancelable>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isActive) BOOL active;

- (struct __CFNotificationCenter { } *)center;
- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithNotificationName:(id)a0 handler:(id /* block */)a1;
- (void)notificationDidFire:(id)a0;

@end
