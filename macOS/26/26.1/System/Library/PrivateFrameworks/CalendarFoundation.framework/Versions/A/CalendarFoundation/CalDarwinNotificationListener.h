@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL listening;
@property (readonly, nonatomic) NSString *notificationName;

- (BOOL)_removeObserver;
- (BOOL)_addObserver;
- (void)deactivate;
- (void)activate;
- (id)description;
- (void)dealloc;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_notificationWithNameReceived:(id)a0;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1 queue:(id)a2;

@end
