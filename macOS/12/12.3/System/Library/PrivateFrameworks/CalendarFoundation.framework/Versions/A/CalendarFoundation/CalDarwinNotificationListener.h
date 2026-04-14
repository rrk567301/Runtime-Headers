@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSString *notificationName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL listening;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (BOOL)_removeObserver;
- (BOOL)_addObserver;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;
- (void)_notificationWithNameReceived:(id)a0;

@end
