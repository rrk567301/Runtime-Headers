@class CCSetChangeRelayServer, CCMaintenanceServer, NSObject, CCScheduledTasks;
@protocol OS_dispatch_queue, CCSetBookkeeping;

@interface CCDaemon : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CCSetChangeRelayServer *_relayServer;
    CCMaintenanceServer *_maintenanceServer;
    id<CCSetBookkeeping> _setBookkeeping;
    CCScheduledTasks *_scheduledTasks;
}

+ (void)resetRootDirectoryIfNecessary;

- (void)start;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 setBookkeeping:(id)a1;

@end
