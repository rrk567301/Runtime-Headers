@class NSLock, NSXPCConnection;

@interface FLUIHelperController : NSObject {
    NSLock *_connLock;
    NSXPCConnection *_conn;
}

+ (id)sharedInstance;

- (id)remoteObjectInterface;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (void)showHSA2PasswordChangeForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)showUIForHSA2LoginCode:(id)a0 notification:(id)a1 completion:(id /* block */)a2;
- (void)showUIForHSA2LoginNotification:(id)a0 completion:(id /* block */)a1;
- (void)tearDownUIForHSA2LoginNotificationWithPushMessageID:(id)a0;

@end
