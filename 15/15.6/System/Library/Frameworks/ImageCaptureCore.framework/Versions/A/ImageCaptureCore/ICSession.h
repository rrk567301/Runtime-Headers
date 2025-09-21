@class NSMutableArray, NSXPCConnection;

@interface ICSession : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceLock;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) NSMutableArray *notifications;
@property (readonly) int pid;
@property char openSession;
@property unsigned long long objectHandle;
@property char forwardPTPEvents;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (int)pid;
- (void)addNotifications:(id)a0;
- (char)interestedInNotification:(id)a0;
- (void)remNotifications:(id)a0;

@end
