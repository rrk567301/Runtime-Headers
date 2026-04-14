@class NSObject;
@protocol OS_xpc_object;

@interface iChatTheaterXPC : NSObject {
    unsigned long long _connectionCount;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_currentPeer;
}

+ (id)sharedInstance;

- (void)addConnection;
- (void)removeConnection;
- (void)connectionUpdated:(id)a0 forName:(id)a1;
- (void)requestConnectionForName:(id)a0;
- (id)currentPeerConnection;

@end
