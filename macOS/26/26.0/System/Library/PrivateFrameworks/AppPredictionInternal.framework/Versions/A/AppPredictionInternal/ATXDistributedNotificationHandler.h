@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (void)_notificationFired:(id)a0;
- (void)registerXPCHandler;
- (void)dealloc;
- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (id)init;
- (void)_pruneOldRecents;
- (void).cxx_destruct;

@end
