@class NSLock, NSXPCConnection;

@interface FLUIHelperController : NSObject {
    NSLock *_connLock;
    NSXPCConnection *_conn;
}

+ (id)sharedInstance;

- (id)connection;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (id)init;
- (void)showHSA2PasswordChangeForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)showUIForHSA2LoginCode:(id)a0 notification:(id)a1 completion:(id /* block */)a2;
- (void)showUIForHSA2LoginNotification:(id)a0 completion:(id /* block */)a1;
- (void)tearDownUIForHSA2LoginNotificationWithPushMessageID:(id)a0;

@end
