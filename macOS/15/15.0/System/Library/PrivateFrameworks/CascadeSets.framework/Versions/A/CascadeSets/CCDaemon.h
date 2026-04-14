@class CCSetChangeRelayServer, NSObject;
@protocol OS_dispatch_queue;

@interface CCDaemon : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CCSetChangeRelayServer *_relayServer;
}

+ (void)registerXPCActivities;
+ (void)resetRootDirectoryIfNecessary;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
