@class NSMutableSet;

@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}

+ (id)sharedInstance;

- (void)registerXPCHandler;
- (void)dealloc;
- (void)_pruneOldRecents;
- (void).cxx_destruct;
- (void)_repostNotificationFromSource:(id)a0 name:(id)a1 userInfo:(id)a2;
- (void)_notificationFired:(id)a0;
- (id)init;

@end
