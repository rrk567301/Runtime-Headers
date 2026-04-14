@class NSObject, NSXPCConnection;
@protocol QLDaemonProxyProtocol;

@interface QLDaemonProxy : NSObject {
    NSXPCConnection *_connection;
    NSObject<QLDaemonProxyProtocol> *_proxy;
}

+ (id)sharedInstance;
+ (id)interface;

- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
