@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL listening;
@property (readonly, nonatomic) NSString *notificationName;

- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1 queue:(id)a2;
- (id)description;
- (BOOL)_removeObserver;
- (BOOL)_addObserver;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_notificationWithNameReceived:(id)a0;
- (void)deactivate;
- (void)activate;

@end
