@class PLOperator, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PLCFNotificationOperatorComposition : NSObject

@property (weak) PLOperator *operator;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property char isStateRequired;
@property int stateToken;
@property char listeningForNotifications;
@property (retain) NSString *notificationName;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOperator:(id)a0 forNotification:(id)a1 requireState:(char)a2 withBlock:(id /* block */)a3;
- (id)initWithWorkQueue:(id)a0 forNotification:(id)a1 requireState:(char)a2 withBlock:(id /* block */)a3;
- (char)listenForNotifications:(char)a0;

@end
