@class NSObject, NSXPCConnection;
@protocol QLDaemonProxyProtocol;

@interface QLDaemonProxy : NSObject {
    NSXPCConnection *_connection;
    NSObject<QLDaemonProxyProtocol> *_proxy;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
