@class NSString, NSMutableDictionary, NSXPCConnection, NSNumber;

@interface ICDClientResource : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceLock;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *notifications;
@property (copy) NSString *name;
@property int pid;
@property BOOL openSession;
@property (copy) NSNumber *transactionID;
@property (copy) NSNumber *callbackInfo;

- (void)dealloc;
- (void)lock;
- (id)initWithConnection:(id)a0;
- (void)unlock;
- (void)addNotifications:(id)a0 forProc:(id)a1;
- (void)remNotifications:(id)a0 forProc:(id)a1;
- (void)cleanupConnection;
- (id)interestedProcsForNotification:(id)a0;

@end
