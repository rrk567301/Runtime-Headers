@class NSString;

@interface CRKConcreteDistributedNotificationSubscription : NSObject <CRKCancelable>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (struct __CFNotificationCenter { } *)center;
- (void)notificationDidFire:(id)a0;
- (id)initWithNotificationName:(id)a0 handler:(id /* block */)a1;

@end
